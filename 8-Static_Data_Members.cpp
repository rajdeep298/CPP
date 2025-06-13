// File: 8-Static_Data_Members.cpp
using namespace std;
#include <iostream>


class Human{
    public:
        static int human_count;
        Human(){
            human_count++;
        }
        void humanTotal(){
            cout << "There are "<<human_count<<" people in this program."<<endl;
        }
};

int Human::human_count=0;//external declaration of static data member


int main(){
    cout << "Before creating any object: ";
    cout << Human::human_count<<endl;
    Human anil;
    anil.humanTotal();
    Human anil2;
    anil2.humanTotal();
    Human anil3;
    anil3.humanTotal();
    return 0;
}

// Output:
// Before creating any object: 0
// There are 1 people in this program.
// There are 2 people in this program.
// There are 3 people in this program.