#include <iostream>

using namespace std;


class Outer {
    private:
        int outerData;

        class Inner {
        private:
            int innerData;
        public:
            Inner(int val) : innerData(val) {}

            void displayInner() {
                cout << "Inner Data: " << innerData << endl;
            }
        };
    public:
        Outer(int val) : outerData(val) {}
        void displayOuter() {
            cout << "Outer Data: " << outerData << endl;
        }
        void createAndDisplayInner(int val) {
            Inner innerObj(val);
            innerObj.displayInner();
        }
};


int main() {
    Outer outerObj(10);
    outerObj.displayOuter();
    outerObj.createAndDisplayInner(20);

    return 0;
}