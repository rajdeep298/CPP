// File: 2-Enum.cpp
#include<iostream>

using namespace std;

enum NameType{p,q};
int main() {
    enum {a, b, c, d, e};
    for (int i = a; i <= e; i++) {
        cout << i << " ";
    }
    cout << endl;

    NameType n = p;
    cout << n << endl;
    return 0;
}

// Output:
// 0 1 2 3 4 
// 0
