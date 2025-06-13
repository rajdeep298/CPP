// File: 18-Friend_Function.cpp
using namespace std;
#include <iostream>


class A {
    int a;
    public:
        A() { a = 0; }
        friend void showA(A& x);// Global function is friend of class A
        friend void B::showB();// Member function of class B is friend
};


void showA(A& x){
    cout << "A::a=" << x.a << endl;
}


class B{
    int b;
    public:
        B() { b = 0; }
        void showB(){
            cout << "B::b=" << b << endl;
        }
};


int main(){
    A a;
    showA(a);
    return 0;
}

// Output:
// A::a=0
// Note: The function showA is a friend of class A, allowing it to access the private member 'a' of class A. The member function showB of class B is also declared as a friend of class A, allowing it to access private members of class A if needed. In this example, however, showB is not called, but it demonstrates how to declare a friend function within another class.