using namespace std;
#include <iostream>

namespace namespaceOuter{
    void func(){
        cout << "namespace1::func()" << endl;
    }
    namespace namespaceInner{
        void func(){
            cout << "namespaceInner::func()" << endl;
        }
    }
}

using namespace namespaceOuter;
int main(){
    func();//as we have used using namespace namespace1, so it will call namespace1::func()
    namespaceInner::func();// this will call namespace2::func(). If we remove using namespace namespace1, then it will give error as func() is ambigious
}

// Output:
// namespace1::func()   
// namespaceInner::func()
// Note: The output will be different if you change the order of the using directives or if you remove them.