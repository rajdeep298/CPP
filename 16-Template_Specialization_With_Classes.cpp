// File: 16-Template_Specialization_With_Classes.cpp
#include <iostream>
using namespace std;

template <class T>
class Test{
// Data members of test
public:
Test(){
	// Initialization of data members
	cout << "General template object \n";
}
// Other methods of Test
};

template <>
class Test <int>{
public:
Test(){
	// Initialization of data members
	cout << "Specialized template object\n";
}
};

int main()
{
	Test<int> a;
	Test<char> b;
	Test<float> c;
	return 0;
}

// Output:
// Specialized template object
// General template object
// General template object