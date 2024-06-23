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