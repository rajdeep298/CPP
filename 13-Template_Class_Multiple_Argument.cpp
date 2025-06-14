// File: 13-Template_Class_Multiple_Argument.cpp
#include <iostream>
using namespace std;

template <class T, class U> 
class A {
    T x;
    U y;

    public:
        A() { cout << "Constructor Called" << endl; }
};

int main(){
    A<char, char> a;
    A<int, double> b;
    return 0;
}

// Output:
// Constructor Called
// Constructor Called
// Note: The template class A can be instantiated with different types, as shown in the main function with char and int, double types.
// This demonstrates the use of templates in C++ to create a class that can handle multiple data types.