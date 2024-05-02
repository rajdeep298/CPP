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