// File: 4-String.cpp
using namespace std;
#include <iostream>
#include <string>
#include<sstream>

int main(){
    string str;
    cin >> str;//Hello World
    cout << str << endl;//Hello

    getline(cin, str);//Hello World
    cout << str << endl;//Hello World

    // string str1 = "Hello World";
    // stringstream ss(str1);
    // string word;
    // while(ss >> word){
    //     cout << word << endl;
    // }

    // char *ptr ="Rajdeep Kundu"; //C++ forbids converting a string constant to char*
    // cout<<*ptr;

    //Instead we can do this 
    string s ="Rajdeep Kundu";
    char *ptr =&s[0];
    cout<<*ptr;

    //or
    char array[]="Rajdeep Kundu";
    char *ptr1 =array;
    cout<<*ptr1;
    
}