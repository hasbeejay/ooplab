#include<iostream>
using namespace std;

union Pay {
    int hours;
    float rate;
};

int main() {
    restart:
    Pay pay;
    char choice;
    cout << "Enter 'h' to input hours worked" << endl;
    cout << "or" << endl;
    cout << "'r' to input pay rate:" << endl;
    cin >> choice;
    switch(choice)
    {
       case 'h':
            cout << "Enter number of hours worked: ";
            cin >> pay.hours;
            cout << "Gross pay based on hours: " << endl;
            cout << pay.hours * 20.0 << endl; 
            // Assuming $20 per hour
            break;
        case 'r':
            cout << "Enter pay rate: ";
            cin >> pay.rate;
            cout << "Gross pay based on rate: " << endl;
            cout << pay.rate * 40 << endl; 
            // Assuming 40 hours of work
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    cout << "Do you want to continue? (y/n): ";
    cin >> choice;
    if(choice == 'y')
        goto restart;
    return 0;
}