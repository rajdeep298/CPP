using namespace std;
#include <iostream>

class Test {
    private:
        ~Test(){
            cout << "Private destructor called." << endl;
        }
    public:
        friend void deleteTest(Test* t); // Friend function to delete Test object
};        

void deleteTest(Test* t) {
    delete t; // Can delete Test object because this function is a friend
}

int main() {
    Test* t = new Test(); // Create a Test object
    deleteTest(t); // Delete the Test object using the friend function
    return 0;
}