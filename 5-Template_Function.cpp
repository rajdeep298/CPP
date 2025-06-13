using namespace std;
#include <iostream>

template <typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    cout << add<int>(1, 2) << endl;
    cout << add<double>(1.1, 2.2) << endl;
    cout << add<string>("Hello", "World") << endl;
}

// Output:
// 3
// 3.3
// HelloWorld