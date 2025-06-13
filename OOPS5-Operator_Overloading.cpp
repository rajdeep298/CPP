// File: OOPS5-Operator_Overloading.cpp
using namespace std;

#include <iostream>

class Complex{
    private:
        float real=0, imaginary=0;
    public:
        Complex(){
            real = 0;
            imaginary = 0;
        };
        Complex(float x, float y){
            real = x;
            imaginary = y;
        };
        Complex operator+(Complex &c1){//operator overloading
            Complex add;
            add.real = this->real + c1.real;
            add.imaginary = this->imaginary + c1.imaginary;
            return add;
        }
        Complex operator*(Complex &c1){//operator overloading
            Complex multiply;
            multiply.real = this->real*c1.real - this->imaginary*c1.imaginary;
            multiply.imaginary = this->real*c1.imaginary + this->imaginary*c1.real;
            return multiply;
        }
        // ostream& operator<<(ostream &out, const Complex &c1) {//operator overloading
        //     out << c1.real << "+ i." << c1.imaginary<<endl; 
        //     return out;
        // }
        friend Complex operator-(Complex &c1,Complex &c2){//friend function
            Complex subtract;
            subtract.real = c1.real - c2.real;
            subtract.imaginary = c1.imaginary - c2.imaginary;
            return subtract;
        }
        friend class Print;
};

class Print{//friend class
    public:
        void print(Complex &c1){
            cout <<"Addition: "<< c1.real << "+ i." << c1.imaginary<<endl;
        }
};

int main(){
    int r1,i1,r2,i2;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2; 


    Complex c1(r1,i1),c2(r2,i2);
    Print p1;
    Complex addition=c1 + c2;
    Complex multiplication=c1*c2 ;
    Complex subtraction=c1-c2;
    // cout << addition << "," << multiplication << "," << subtraction << endl ;
    
    cout<<"Addition:";
    p1.print(addition);
    cout<<"Multiplication:";
    p1.print(multiplication);
    cout<<"Subtraction:";   
    p1.print(subtraction);

    return 0;
}

//
// Output:
// Enter real and imaginary part of first complex number: 5 2
// Enter real and imaginary part of second complex number: 5 -3
// Addition:Addition: 10+ i.-1
// Multiplication:Addition: 31+ i.-5
// Subtraction:Addition: 0+ i.5