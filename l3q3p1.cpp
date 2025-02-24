#include <iostream>
#include <fstream>
using namespace std;

// Rectangle class declaration.
class Rectangle {
private:
    double width;
    double length;
public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

// Assigns a value to the width member.
void Rectangle::setWidth(double w) {
    width = w;
}

// Assigns a value to the length member.
void Rectangle::setLength(double l) {
    length = l;
}

// Returns the value in the width member.
double Rectangle::getWidth() const {
    return width;
}

// Returns the value in the length member.
double Rectangle::getLength() const {
    return length;
}

// Returns the product of width and length.
double Rectangle::getArea() const {
    return width * length;
}

// Reads rectangle data from the user.
void readData(Rectangle arr[], int &nRecords) {
    cout << "Enter number of rectangles (max 50): ";
    cin >> nRecords;
    if(nRecords > 50)
        nRecords = 50;
    for (int i = 0; i < nRecords; i++) {
        double w, l;
        cout << "Enter width and length for rectangle " << i + 1 << ": ";
        cin >> w >> l;
        arr[i].setWidth(w);
        arr[i].setLength(l);
    }
}

// Displays the rectangle data.
void printData(Rectangle arr[], int nRecords) {
    for (int i = 0; i < nRecords; i++) {
        cout << "Rectangle " << i + 1 << ": Width = " << arr[i].getWidth()
             << ", Length = " << arr[i].getLength()
             << ", Area = " << arr[i].getArea() << endl;
    }
}

void printFile(Rectangle arr[], int nRecords) {
    ofstream fout("rectangle.txt", ios::app);
    for(int i = 0; i < nRecords; i++) {
        fout << "Rectangle " << i + 1 << ": Width = " << arr[i].getWidth()
             << ", Length = " << arr[i].getLength()
             << ", Area = " << arr[i].getArea() << endl;
    }
}

int main() {
    // Declare an array that can hold 50 Rectangle objects.
    Rectangle rectArray[50];

    cout << ">> This program demonstrates loading rectangle data from user input <<\n\n";
    
    int nRecords = 0;
    
    // Get rectangle data from the user.
    readData(rectArray, nRecords);
    cout << "\nA total of " << nRecords << " record(s) entered." << endl;
    
    // Display the rectangle data.
    cout << "\n......Here is the data stored in the array...............\n";
    printData(rectArray, nRecords);
    printFile(rectArray, nRecords);
    return 0;
}
