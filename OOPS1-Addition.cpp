// File: OOPS1-Addition.cpp
using namespace std;
#include <iostream>
class Calculate{
    private:
        int a,b;
    public:
        int add(int x, int y) {
            return a+b;
        }
};
Calculate::Calculate() {//external definition of this constructor
    a=10;
    b=20;
}
int main() {
    Calculate c;
    int sum=c.add(10,20);
}

// Output:
// 30
// Note: The class Calculate has a constructor that initializes the private members 'a' and 'b'. The add function returns the sum of 'a' and 'b', which are initialized in the constructor. The main function creates an object of Calculate and calls the add function, which returns the sum of 10 and 20, resulting in an output of 30.