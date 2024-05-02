using namespace std;
#include <iostream>
class Base {
public:
    int publicMember=10;
protected:
    int protectedMember=20;
private:
    int privateMember=30;
};

class DerivedPublic : public Base {
    // publicMember is public
    // protectedMember is protected
    // privateMember is not accessible
};

class DerivedProtected : protected Base {
    // publicMember is protected
    // protectedMember is protected
    // privateMember is not accessible
};

class DerivedPrivate : private Base {
    // publicMember is private
    // protectedMember is private
    // privateMember is not accessible
};

int main() {
    DerivedPublic d1;
    DerivedProtected d2;
    DerivedPrivate d3;

    cout<<d1.publicMember<<endl;// publicMember is public
    // cout<<d1.protectedMember<<endl;// protectedMember is protected, so can be accessed in derived class only
    // cout<<d1.privateMember<<endl;// privateMember is not accessible

    // cout<<d2.publicMember<<endl;// publicMember is protected, so can be accessed in derived class only
    // cout<<d2.protectedMember<<endl;// protectedMember is protected, so can be accessed in derived class only
    // cout<<d2.privateMember<<endl;// privateMember is not accessible

    // cout<<d3.publicMember<<endl;// publicMember is private, so cant be accessed
    // cout<<d3.protectedMember<<endl;// protectedMember is private, so cant be accessed
    // cout<<d3.privateMember<<endl;// privateMember is not accessible
    return 0;
}