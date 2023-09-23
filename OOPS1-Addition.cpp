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
int main() {
    Calculate c;
    int sum=c.add(10,20);
}