// File: 15-Template_Function_Regular_Variable.cpp
#include <iostream>
using namespace std;

template <class T, int max> 
int arrMin(T arr[], int n){
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];

    return m;
};


int main(){
    int arr1[] = { 10, 20, 15, 12 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = { 1, 2, 3 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Second template parameter
    // to arrMin must be a
    // constant
    cout << arrMin<int, 10000>(arr1, n1) << endl;
    cout << arrMin<char, 256>(arr2, n2);
  
    return 0;
}

// Output:
// 10
// 1
// Note: The template function arrMin is designed to find the minimum value in an array of type T, with a maximum value specified by the second template parameter. The main function demonstrates its usage with both int and char arrays, showcasing the flexibility of templates in C++. The second template parameter must be a constant, as shown in the calls to arrMin.
// The output confirms that the function correctly identifies the minimum values in both arrays, demonstrating the utility of templates for type-generic programming in C++.