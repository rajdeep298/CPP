// File: OOPS4-Destructor.cpp
using namespace std;

#include <iostream>
// Impilicit Destructor is called automatically when object goes out of scope
//Does not handle dynamically allocated memory (e.g., using new) within the class. 
//If your class manages dynamic memory, relying solely on the implicit destructor can lead to memory leaks.
class print{
    private:
        int x;
    public:
        print(int x){
            this->x=x*x;
        }
        
        
        // Also called Explicit Destructor
        ~print();
};

print::~print(){
    cout << x << endl;
}

int main(){
    print p(5);
    return 0;
}

//private constructor and destructor


// Output:
// 25