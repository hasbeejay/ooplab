#include <iostream>
using namespace std;

struct Employee 
{
    int id;
    string name;
    double hours;
    double pay;
};

void Display
(Employee emp, double grossPay) 
{
    cout<<"====================================================="<<endl;
    cout << "Employee Details:"<<endl;
    cout << "ID: " << emp.id << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Hours Worked: " << emp.hours << endl;
    cout << "Pay Rate: " << emp.pay <<"Rs" << endl;
    cout << "Gross Pay: " << grossPay <<"Rs" << endl;
    cout<<"====================================================="<<endl;
}

int main() 
{
    start:
    Employee emp;
    cout << "Enter employee ID: ";
    cin >> emp.id;
    cout << "Enter employee name: ";
    cin.ignore();   getline(cin, emp.name);
    cout << "Enter hours worked(per day): ";
    cin >> emp.hours;
    cout << "Enter pay rate(Rs): ";
    cin >> emp.pay;
    double grossPay = emp.hours * emp.pay;
    Display(emp, grossPay);
    char ch;
    cout<<"Do you want to enter details of any other employee? (y/n): ";
    cin>>ch;
    if(ch=='y' || ch=='Y')
        goto start;
    return 0;
}