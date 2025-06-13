using namespace std;
#include <iostream>

void swapByRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

struct demo {
    int a;
};

int main() {
    int a = 10, b = 20;
    cout << "Before swapping: " << a << " " << b << endl;

    // Call by reference
    swapByRef(a, b);
    cout << "After swapping by reference: " << a << " " << b << endl;

    // Call by address
    swapByAddress(&a, &b);
    cout << "After swapping by address: " << a << " " << b << endl;

    cout << "\n\nDifference between Pass by Reference and Pass by Address:" << endl;

    int x = 5;
    int y = 6;
    demo d;

    int* p;
    p = &x;
    p = &y; // 1. Pointer reinitialization allowed

    int& r = x;
    // &r = y;                 // 1. Compile Error

    r = y; // 1. x value becomes 6

    p = NULL;
    // &r = NULL;             // 2. Compile Error

    // 3. Points to next memory location
    p++;

    // 3. x values becomes 7
    r++;

    cout << "In pointers they have different addresses: " << &p << " " << &x << '\n'; // 4. Different address
    cout << "In references they have same addresses: " << &r << " " << &x << '\n'; // 4. Same address

    demo* q = &d;
    demo& qq = d;

    q->a = 8;
    // q.a = 8;                 // 5. Compile Error
    qq.a = 8;
    // qq->a = 8;             // 5. Compile Error

    // 6. Prints the address as p is a pointer and it points to the address of x
    cout << p << '\n';

    // 6. Print the value of x as r is a reference or alias to x
    cout << r << '\n';

    return 0;
}