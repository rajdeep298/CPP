using namespace std;
#include <iostream>

namespace namespace1{
    void func(){
        cout << "namespace1::func()" << endl;
    }
}

namespace namespace2{
    void func(){
        cout << "namespace2::func()" << endl;
    }
}


using namespace namespace1;
int main(){
    func();//as we have used using namespace namespace1, so it will call namespace1::func()
    namespace2::func();// this will call namespace2::func(). If we remove using namespace namespace1, then it will give error as func() is ambigious
}