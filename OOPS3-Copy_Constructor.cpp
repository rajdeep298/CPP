using namespace std;

#include <iostream>
#include <string.h>

class employee{
    public:
        string employeeId;
        string employeeName;
        int employeeAge;
        int salary;
        employee(string employeeId, string employeeName, int employeeAge, int salary){//Method Overloading
            this->employeeId = employeeId;
            this->employeeName = employeeName;
            this->employeeAge = employeeAge;
            this->salary = salary;
        }
        employee(const employee &e){
            employeeId = e.employeeId;
            employeeName = e.employeeName;
            employeeAge = e.employeeAge;
            salary = e.salary;
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
    employee e2(e1);
    e2.display();
    e2.calculatePension();
    return 0;
}

//
// Output:
// Employee Id: E001
// Employee Name: John
// Employee Age: 25
// Employee Salary: 50000
// You are not eligible for pension
// Employee Id: E001
// Employee Name: John
// Employee Age: 25
// Employee Salary: 50000
// You are not eligible for pension