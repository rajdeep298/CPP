// File: 21-Default_Arguments.cpp
using namespace std;
#include <iostream>

int largest(int a,int b=-12768){
    return a>b?a:b;
}

int main() {
    cout << largest(5) << endl;
    cout << largest(5, 10) << endl;
    return 0;
}

//
// Output:
// 5
// 10