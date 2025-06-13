using namespace std;
#include <iostream>

class abstractBaseClass {
public:
  virtual void sayHello() = 0; // Pure virtual function
};

class derivedClass: public abstractBaseClass {
public:
  void sayHello() {
    cout << "Hello! I am a derived class!" << endl;
  }
};

int main() {
  derivedClass anObject = derivedClass();
  anObject.sayHello();
}

// Output:
// Hello! I am a derived class!