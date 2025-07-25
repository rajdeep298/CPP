// File: 14-Template_Class_With_Default_Value.cpp
#include <iostream>
using namespace std;

template <class T, class U = char> class A {
public:
    T x;
    U y;
    A() { cout << "Constructor Called" << endl; }
};

int main(){
    // This will call A<char, char>
    A<char> a;

    return 0;
}

// Output:
// Constructor Called
