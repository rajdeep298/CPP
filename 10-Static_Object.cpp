using namespace std;
#include <iostream>

class Static{
    public:
        Static(){
            cout << "Constructor called."<<endl;
        }
        ~Static(){
            cout << "Destructor called."<<endl;
        }
};


int main(){
    int x=0;
    if(x==0){
            Static s1;
            // Constructor called.
            // Destructor called.
            // End of main function.


            // static Static s2;
            // Constructor called.
            // End of main function.
            // Destructor called.
    }
    cout << "End of main function."<<endl;
    return 0;
}