using namespace std;
#include <iostream>
class Calculate{
    private:
        int a,b;
    public:
        Calculate(int x, int y) {
            a = x;
            b = y;
            cout << "Sum is: " << add() << endl;
        }
        int add() {
            return a+b;
        }
};
int main() {
    Calculate c(10,20);
    int sum=c.add();
}