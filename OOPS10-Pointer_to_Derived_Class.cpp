// File: OOPS10-Pointer_to_Derived_Class.cpp
using namespace std;
#include <iostream>

class BaseClass{
    protected:
    public:
        int var_base;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};


class DerivedClass : public BaseClass{
    public:
        int var_derived;
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

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 3400; 
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}


// Output:
// Dispalying Base class variable var_base 34
// Dispalying Base class variable var_base 3400
// Dispalying Base class variable var_base 9448
// Dispalying Derived class variable var_derived 98
