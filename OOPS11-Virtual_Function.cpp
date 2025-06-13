using namespace std;
#include <iostream>

class BaseClass{
    public:
        int var_base=10;
        virtual void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived=20;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
            cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class
    base_class_pointer->display();

    base_class_pointer = &obj_base; // Pointing base class pointer to base class
    base_class_pointer->display();
}


//
// Output:
// Dispalying Base class variable var_base 10
// Dispalying Base class variable var_base 10
// Dispalying Derived class variable var_derived 20
