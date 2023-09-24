#include <iostream>

class Complex {
private:
    float real;
    float imaginary;

public:
    Complex() : real(0), imaginary(0) {}
    Complex(float x, float y) : real(x), imaginary(y) {}

    Complex operator+(const Complex &c1) const {
        Complex add;
        add.real = this->real + c1.real;
        add.imaginary = this->imaginary + c1.imaginary;
        return add;
    }

    Complex operator*(const Complex &c1) const {
        Complex multiply;
        multiply.real = this->real * c1.real - this->imaginary * c1.imaginary;
        multiply.imaginary = this->real * c1.imaginary + this->imaginary * c1.real;
        return multiply;
    }

    friend Complex operator-(const Complex &c1, const Complex &c2) {
        Complex subtract;
        subtract.real = c1.real - c2.real;
        subtract.imaginary = c1.imaginary - c2.imaginary;
        return subtract;
    }

    friend std::ostream& operator<<(std::ostream &out, const Complex &c1) {
        out << c1.real << " + i." << c1.imaginary;
        return out;
    }
};

int main() {
    float r1, i1, r2, i2;
    std::cout << "Enter real and imaginary part of first complex number: ";
    std::cin >> r1 >> i1;
    std::cout << "Enter real and imaginary part of second complex number: ";
    std::cin >> r2 >> i2;
    
    Complex c1(r1, i1), c2(r2, i2);
    Complex addition = c1 + c2;
    Complex multiplication = c1 * c2;
    Complex subtraction = c1 - c2;
    
    std::cout << addition << " " << multiplication << " " << subtraction << std::endl;
    
    return 0;
}
