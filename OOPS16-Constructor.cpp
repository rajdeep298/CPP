#include <iostream>

using namespace std;

// Implicit Constructor is called automatically when object is created
class Sample{
    private:
        int a;
    public:
        // These are explicit constructors
        // Default Constructor
        Sample(){
            a = 0;
            cout << "Default Constructor called, a = " << a << endl;
        }
        
        // Parameterized Constructor
        Sample(int val){
            a = val;
            cout << "Parameterized Constructor called, a = " << a << endl;
        }
        
        void display(){
            cout << "Value of a: " << a << endl;
        }
};


int main(){
    Sample obj1; // Calls Default Constructor
    obj1.display();
    
    Sample obj2(42); // Calls Parameterized Constructor
    obj2.display();
    
    return 0;
}