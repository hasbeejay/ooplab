#include <iostream>
#include <string>

using namespace std;

struct Date {
    int month;
    int day;
    int year;
};

struct Residence {
    string address;
    string city;
    string state;
    string zipCode;
};

struct Employee {
    string name;
    int number;
    Date birthdate;
    Residence residence;
};

void Display(Employee emp)
{
    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee Number: " << emp.number << endl;
    cout << "Birthdate: " << emp.birthdate.month << "/" << emp.birthdate.day << "/" << emp.birthdate.year << endl;
    cout << "Residence: " << emp.residence.address << ", " << emp.residence.city << ", " << emp.residence.state << " " << emp.residence.zipCode << endl;
}

int main() {
    Employee emp;
    emp.name = "John Doe";
    emp.number = 12345;
    emp.birthdate = {12, 25, 1990};
    emp.residence = {"123 Main St", "Anytown", "Anystate", "12345"};
    Display(emp);
    return 0;
}