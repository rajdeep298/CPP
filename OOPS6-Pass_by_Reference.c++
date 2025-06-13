#include <iostream>
using namespace std;
class Cal {
    public:
        int change(int &a) // reference variable.
        {
            a = 20;
            return 0;
        }
        int change(int *a) // pointer variable.
        {
            *a = 20;
            return 0;
        }
};
int main()
{
    Cal C; // class object declaration.
    int a = 10;
    cout << "Before: " << a << endl;

    C.change(a);
    cout << "After pass by reference: " << a << endl;

    C.change(&a);
    cout << "After pass by pointer:" << a << endl;
    return 0;
}

//
// Output:
// Before: 10
// After pass by reference: 20
// After pass by pointer:20