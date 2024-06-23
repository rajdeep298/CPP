using namespace std;
#include <iostream>

inline void swapByRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

inline void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swapping: " << a << " " << b << endl;

    // Call by reference
    swapByRef(a, b);
    cout << "After swapping by reference: " << a << " " << b << endl;
    cout << "After swapping by reference: " << a << " " << b << endl;
    cout << "After swapping by reference: " << a << " " << b << endl;
    cout << "After swapping by reference: " << a << " " << b << endl;
    cout << "After swapping by reference: " << a << " " << b << endl;
    cout << "After swapping by reference: " << a << " " << b << endl;
    cout << "After swapping by reference: " << a << " " << b << endl;

    // Call by address
    swapByAddress(&a, &b);
    cout << "After swapping by address: " << a << " " << b << endl;
    cout << "After swapping by address: " << a << " " << b << endl;
    cout << "After swapping by address: " << a << " " << b << endl;
    cout << "After swapping by address: " << a << " " << b << endl;
    cout << "After swapping by address: " << a << " " << b << endl;
    cout << "After swapping by address: " << a << " " << b << endl;
    cout << "After swapping by address: " << a << " " << b << endl;
    cout << "After swapping by address: " << a << " " << b << endl;
    cout << "After swapping by address: " << a << " " << b << endl;
    return 0;
}