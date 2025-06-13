// File: 9-Static_Function_Members.cpp
using namespace std;
#include <iostream> 
 

class Box 
{ 
	private: 
        static int length; 
        static int breadth; 
        static int height; 
        int volume;
	
	public:
        Box(){
            volume = length*breadth*height;
        }
        
        static void print() 
        { 
            cout << "The value of the length is: " << length << endl; 
            cout << "The value of the breadth is: " << breadth << endl; 
            cout << "The value of the height is: " << height << endl; 
            // cout << "The volume of the Box is: " << volume << endl;//this line will give error as volume is not static
            // cout << "Use of this pointer is not allowed in static member function." << this->height << endl;//this line will give error as this pointer is not allowed in static member function
        }
}; 

// initialize the static data members 

int Box :: length = 10; 
int Box :: breadth = 20; 
int Box :: height = 30; 

// Driver Code

int main() {
	
	Box b; 
	
	cout << "Static member function is called through Object name: \n" << endl; 
	b.print(); 
	
	cout << "\nStatic member function is called through Class name: \n" << endl; 
	Box::print(); 
	
	return 0; 
}


// Output:
// Static member function is called through Object name:    The value of the length is: 10
// The value of the breadth is: 20
// The value of the height is: 30
