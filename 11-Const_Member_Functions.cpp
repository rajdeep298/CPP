using namespace std;
#include <iostream>

class Update{
    private:
        int x;

    public:
        Update(int x) : x(x) {} // initializer list
        void updateX() const{
            // x++; // this line will give error as this function is  constant
            cout << "Value of x is: "<<x<<endl;
        }
        void updateX(int x) const{
            // this->x=x; // this line will give error as this pointer is not allowed in constant member function
            cout << "Value of x is: "<<x<<endl;
        }
};

int main(){
    Update u(10);
    u.updateX();
    u.updateX(10);
    return 0;
}