// File: 19-Template_Specialization.cpp
#include <iostream>
using namespace std;

template <class T>
void fun(T a){
cout << "The main template fun(): "
		<< a << endl;
}

template<>
void fun<int>(int a){
	cout << "Specialized Template for int type: "
		<< a << endl;
}

int main(){
	fun<char>('a');
	fun<int>(10);
	fun<float>(10.14);
}


// Output:
// The main template fun(): a
// Specialized Template for int type: 10
// The main template fun(): 10.14
// Note: The template function fun is specialized for the int type, allowing it to handle int arguments differently from other types. The main function demonstrates calling the template with different types, including char, int, and float.