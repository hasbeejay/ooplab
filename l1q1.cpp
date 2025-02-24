#include <iostream>
using namespace std;

struct student 
{
    int marks;
    char grade;
};

int main() {
    student students[5];
    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter marks for Student " << i + 1 << ": ";
        cin >> students[i].marks;
        if      (students[i].marks >= 70) students[i].grade = 'A';
        else if (students[i].marks >= 60) students[i].grade = 'B';
        else if (students[i].marks >= 50) students[i].grade = 'C';
        else if (students[i].marks >= 40) students[i].grade = 'D';
        else                              students[i].grade = 'E';
    }
    cout<<"====================================================="<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<i+1<<" has got "<<students[i].marks<<" marks and grade "<<students[i].grade<<endl;
    }
}