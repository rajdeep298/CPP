using namespace std;

#include <iostream>

class print{
    private:
        int x;
    public:
        print(int x){
            this->x=x*x;
        }
        ~print();
};

print::~print(){
    cout << x << endl;
}

int main(){
    print p(5);
    return 0;
}

//private constructor and destructor