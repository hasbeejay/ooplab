#include <iostream>
#include <fstream>
using namespace std;

struct Student 
{
    string name;
    int age;
    float gpa;
};

void input(Student* s) 
{
    cout << "Enter name: ";
    cin >> s->name;
    cout << "Enter age: ";
    cin >> s->age;
    cout << "Enter GPA: ";
    cin >> s->gpa;
}

void display(Student* s) 
{
    cout << "Name: " << s->name << endl;
    cout << "Age: " << s->age << endl;
    cout << "GPA: " << s->gpa << endl;
}

void update(Student* s) 
{
    cout << "Enter new GPA: ";
    cin >> s->gpa;
}

void save(Student* s) 
{
    ofstream file("data.txt", ios::app);
    if (file) 
    {
        file << "Name: " << s->name << endl;
        file << "Age: " << s->age << endl;
        file << "New GPA: " << s->gpa << endl;
        file << "-------------------" << endl;
        file.close();
    } else 
    {
        cout << "Unable to open file" << endl;
    }
}

int main()
{
    start:
    Student s;
    input(&s);
    display(&s);
    update(&s);
    display(&s);
    save(&s);
    cout << "Do you want to continue? (y/n): ";
    char choice; cin >> choice;
    if (choice == 'y') goto start;
    return 0;
}

