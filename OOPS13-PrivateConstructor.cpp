using namespace std;
#include <iostream>
#include <cmath>

// Using Friend Class to Access Private Constructor
// class A {
//     private:
//         A() {
//             cout << "Private constructor called." << endl;
//         }

//         friend class B; // Class B can access private members of A  
// };

// class B {
//     public:
//         B() {
//             A a; // Allowed because B is a friend of A
//         }
// };


// Using Named Constructor Pattern
class Point{
    private:
        float x, y;

        Point(float x, float y) : x(x), y(y) {}
    public:
        static Point Polar(float r, float theta) {
            return Point(r * cos(theta), r * sin(theta));
        }

        static Point Rectangle(float x, float y) {
            return Point(x, y);
        }

        void display() {
            cout << "Point(" << x << ", " << y << ")" << endl;
        }
};
int main() {
    // B b; // Create an object of class B, which in turn creates an object of class A

    Point p1 = Point::Polar(5, 0.927); // Create a point using polar coordinates
    p1.display(); // Display the point created using polar coordinates
    
    Point p2 = Point::Rectangle(3, 4); // Create a point using rectangular coordinates
    p2.display(); // Display the point created using rectangular coordinates
    return 0;
}