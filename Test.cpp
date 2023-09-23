using namespace std;

#include <iostream>

class complex{
    private:
        float real=0, imaginary=0;
    public:
        complex(float x, float y){
            this->real = x;
            this->imaginary = y;
        }
        complex add(complex &c1){//operator overloading
            complex add(0,0);
            add.real = this->real + c1.real;
            add.imaginary = this->imaginary + c1.imaginary;
            return add;
        }
        complex multiply(complex &c1){//operator overloading
            complex multiply(0,0);
            multiply.real = this->real*c1.real - this->imaginary*c1.imaginary;
            multiply.imaginary = this->real*c1.imaginary + this->imaginary*c1.real;
            return multiply;
        }
};

int main(){
    return 0;
}