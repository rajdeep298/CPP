using namespace std;
#include <iostream>

// defining function template
template <typename t> t multiply(t first, t second){
    return first * second;
}

// driver code
int main(){
    auto result = multiply(10.5, 20.5);
    cout << "Multiplication OF 10 and 20: " << result<< endl;
    return 0;
}