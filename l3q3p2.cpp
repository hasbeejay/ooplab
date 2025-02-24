#include <iostream>
#include <fstream>
using namespace std;

const double PI = 3.14;

class Circle {
public:
    void setCenter(int, int);
    void setRadius(float);
    double findArea();
    double findCircumference();
    void printCircleStats(ostream &out); // Modified to output to a stream
private:
    float radius;
    int center_x;
    int center_y;
};

void Circle::setRadius(float r) {
    radius = r;
}

void Circle::setCenter(int x, int y) {
    center_x = x;
    center_y = y;
}

double Circle::findArea() {
    return PI * radius * radius;
}

double Circle::findCircumference() {
    return 2 * PI * radius;
}

// The function now takes an ostream reference to allow output to both console and file.
void Circle::printCircleStats(ostream &out) {
    out << "Circle Center: (" << center_x << ", " << center_y << ")\n";
    out << "Circle Radius: " << radius << "\n";
}

int main() {
    Circle cir;
    float r;
    int x, y;
    
    // Prompt user for input.
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Enter the center coordinates (x and y): ";
    cin >> x >> y;
    
    cir.setRadius(r);
    cir.setCenter(x, y);
    
    double area = cir.findArea();
    double circumference = cir.findCircumference();
    
    // Display output on the console.
    cout << "\nThe area of the circle is " << area << endl;
    cout << "The circumference of the circle is " << circumference << endl;
    cir.printCircleStats(cout);
    
    // Write output to file.
    ofstream outFile("circle_output.txt");
    if (!outFile) {
        cout << "Error creating file for output." << endl;
        return 1;
    }
    outFile << "Circle Details:\n";
    outFile << "-----------------\n";
    outFile << "Center: (" << x << ", " << y << ")\n";
    outFile << "Radius: " << r << "\n";
    outFile << "Area: " << area << "\n";
    outFile << "Circumference: " << circumference << "\n";
    outFile.close();
    
    cout << "\nCircle details have been written to 'circle_output.txt'" << endl;
    
    return 0;
}
