using namespace std;
#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// Output:
// 1 2 3 4 5
// Note: This code demonstrates the use of range-based for loops in C++. The loop iterates over each element in the array `arr` and prints them. Range-based for loops provide a simpler syntax for iterating through collections compared to traditional for loops.