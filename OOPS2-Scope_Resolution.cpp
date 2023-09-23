using namespace std;

#include <iostream>
#include <string.h>

class employee{
    public:
        char employeeId[100];
        char employeeName[100];
        int employeeAge;
        int salary;
        employee(char employeeId[], char employeeName[], int employeeAge, int salary){
            strcpy(this->employeeId, employeeId);
            strcpy(this->employeeName, employeeName);
            this->employeeAge = employeeAge;
            this->salary = salary;
        }
        void display();
        void calculatePension();
};

void employee::display(){
    cout << "Employee Id: " << employeeId << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << "Employee Age: " << employeeAge << endl;
    cout << "Employee Salary: " << salary << endl;
}
void employee::calculatePension(){
    if(employeeAge>60)
        cout << "Pension: " << salary*0.8 << endl;
    else
        cout << "You are not eligible for pension" << endl;
}

int main(){
    employee e1("E001", "John", 25, 50000);
    e1.display();               
    e1.calculatePension();
    return 0;
}