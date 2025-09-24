#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        const int id;               // Constant member
        string name;                // Regular member
        const int& age;             // Reference member

    public:
        // Constructor using initializer list to initialize constant and reference members
        Person(int _id, const string& _name, const int& _age)
            : id(_id), name(_name), age(_age) {  // initializer list
            // id is initialized to _id
            // name is initialized to _name
            // age is initialized to _age (reference to a constant int)
            cout << "Constructor called!" << endl;
        }

        // Function to display information
        void displayInfo() const {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    int age = 30;

    // Create a Person object, initializing constant and reference members via constructor
    Person p(1, "John Doe", age);

    // Display information
    p.displayInfo();

    age=31; // Modify age variable to show reference behavior
    cout << "After modifying age variable:" << endl;
    p.displayInfo();

    return 0;
}
