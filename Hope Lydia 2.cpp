/*
 Author:Hope Kimani
 Reg no:BBIT-01-0009/2025
 Description:Program to help calculate the body mass index.
 Date:28/05/2025
 Version 1
 */

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int salary;

public:
    void setName(string nam) {
        name = nam;
    }

    void setSalary(int sal) {
        salary = sal;
    }

    string getName() {
        return name;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;
    emp.setName("Hope");
    emp.setSalary(2000000);

    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    return 0;
}