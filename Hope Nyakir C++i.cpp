/*
 Author:Hope Kimani
 Reg no:BBIT-01-0009/2025
 Description:Program to calculate the gross pay, taxes and net pay.
 Date:11/06/2025
 Version 1
 */
 
 #include <iostream>//cout,cin
 #include <cmath>
 using namespace std;
 
 //function prototype
float gross_pay(float hours_worked, float hourly_wage){
	return(hours_worked * hourly_wage);
}
float taxes(float gross_pay){
	return(600 * 0.15) + ((gross_pay - 600) * 0.20);
}
float net_pay(float taxes, float gross_pay){
	return(gross_pay - taxes);
}

int main(){
 float hourly_wage, hours_worked, Salary, Tax, net_salary;
 cout<<"Functions in C++ "<<endl;
 //calling functions - arguments
 cout<<"Enter hourly_wage: "<<endl;
 cin >> hourly_wage;
 cout<<"Enter hours_worked: "<<endl;
 cin >> hours_worked;

 Salary=gross_pay(hours_worked, hourly_wage);
 cout<<"Calling Salary: "<<Salary<<endl;
 
 Tax = taxes(Salary);
 cout<<"Calling Tax: "<<Tax<<endl;
 
 net_salary=net_pay(Tax, Salary);
 cout<<"Calling net_salary: "<<net_salary<<endl;
 
 return 0;
 
}