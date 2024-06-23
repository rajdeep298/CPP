using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    //[capture clause](paramters){function body}(function call)
    [](int x, int y){cout << x + y << endl;}(10, 20);
    //capture clause: [] - captures nothing
    //parameters: (int x, int y)
    //function body: {cout << x + y << endl;}
    //function call: (10, 20)


    int a = 10, b = 20;
    cout << "Before swapping: " << a << " " << b << endl;
    [](int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }(a, b);

    cout << "After swapping by reference: " << a << " " << b << endl;

    [](int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }(&a, &b);

    cout << "After swapping by address: " << a << " " << b << endl;

    [](int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }(a, b);

    cout << "After swapping by value: " << a << " " << b << endl;//No change in values as we are passing by value

    [=](){
        // in capture clause [=] means capture all the variables by value
        cout << a << " " << b << endl;
    }();
    
    [&](){
        // in capture clause [&] means capture all the variables by reference
        a = 100;
        b = 200;
    }();

    cout << a << " " << b << endl;

    //Above this two can only assign values to a and b but can't change the values of a and b

    int c = 10, d = 20;
    [a,b](){
        // in capture clause [a,b] means capture only a and b by value
        cout << a << " " << b << endl;
    }();

    [a,b,&c,&d](){
        // in capture clause [a,b,&c,&d] means capture a and b by value and c and d by reference
        c = 100;
        d = 200;
    }();

    cout << c << " " << d << endl;

    vector<int> v = {1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), [](int x){
        cout << x << " ";
    });
    //count_if is a function which takes a range and a lambda function as arguments
    
}