#include <iostream>
using namespace std;

enum TrafficLightState {
    RED,
    YELLOW,
    GREEN
};

void displayTrafficLightMessage(TrafficLightState state) {
    switch (state) {
        case 0: // RED
            cout << "Red: Stop!" << endl;
            break;
        case 1: // YELLOW
            cout << "Yellow: Start engine and be ready!" << endl;
            break;
        case 2: // GREEN
            cout << "Green: You are ready to Go!" << endl;
            break;
        default:
            cout << "Invalid state" << endl;
            break;
    }
}

int main() {
    restart:
    TrafficLightState userInput;
    char choice;
    cout<<"Enter 'r' for Red, 'y' for Yellow, 'g' for Green: ";
    cin>>choice;
    if(choice=='r')
        userInput = RED;
    else if(choice=='y')
        userInput = YELLOW;
    else if(choice=='g')
        userInput = GREEN;
    else {
        cout<<"Invalid choice"<<endl;
        return 1;
    }
    displayTrafficLightMessage(userInput);
    cout << "Do you want to continue? (y/n): ";
    cin >> choice;
    if(choice == 'y')
        goto restart;
    return 0;
}