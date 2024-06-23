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
    
}