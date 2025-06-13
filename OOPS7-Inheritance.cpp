using namespace std;
#include <iostream>

class A{
    public:
        A(){
            cout << "Constructor of A" << endl;
        }
        ~A(){
            cout << "Destructor of A" << endl;
        }
};

class A1{
    public:
        A1(){
            cout << "Constructor of A1" << endl;
        }
        ~A1(){
            cout << "Destructor of A1" << endl;
        }
};
class A2{
    public:
        A2(){
            cout << "Constructor of A2" << endl;
        }
        ~A2(){
            cout << "Destructor of A2" << endl;
        }
};

class B: public A{//Single Inheritance
    public:
        B(){
            cout << "Constructor of B" << endl;
        }
        ~B(){
            cout << "Destructor of B" << endl;
        }
};

class C: public B{//Multilevel Inheritance
    public:
        C(){
            cout << "Constructor of C" << endl;
        }
        ~C(){
            cout << "Destructor of C" << endl;
        }
};

class D:public A1, public A2{//Multiple Inheritance
    public:
        D(){
            cout << "Constructor of D" << endl;
        }
        ~D(){
            cout << "Destructor of D" << endl;
        }
};

class E:public A1{//Hierarchical Inheritance
    public:
        E(){
            cout << "Constructor of E" << endl;
        }
        ~E(){
            cout << "Destructor of E" << endl;
        }

};
class F:public A1{
    public:
        F(){
            cout << "Constructor of F" << endl;
        }
        ~F(){
            cout << "Destructor of F" << endl;
        }
};

int main(){
    // C c;
    
    // D d;

    E e;

    F f;
    return 0;
}

// Output:
// Constructor of A1                                                                                                          
// Constructor of E
// Constructor of A1
// Constructor of F
// Destructor of F
// Destructor of A1
// Destructor of E
// Destructor of A1
