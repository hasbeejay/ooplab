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
    void printCircleStats(ostream &out); // Outputs center and radius
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

void Circle::printCircleStats(ostream &out) {
    out << "Circle Center: (" << center_x << ", " << center_y << ")\n";
    out << "Circle Radius: " << radius << "\n";
}

// Function that writes circle data to a file.
void writeCircleDataToFile(Circle &cir, const string &filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error creating file for output." << endl;
        return;
    }
    outFile << "Circle Details:\n";
    outFile << "-----------------\n";
    cir.printCircleStats(outFile);
    outFile << "Area: " << cir.findArea() << "\n";
    outFile << "Circumference: " << cir.findCircumference() << "\n";
    outFile.close();
    cout << "\nCircle details have been written to '" << filename << "'" << endl;
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
    
    // Display output on the console.
    cout << "\nThe area of the circle is " << cir.findArea() << endl;
    cout << "The circumference of the circle is " << cir.findCircumference() << endl;
    cir.printCircleStats(cout);
    
    // Write output to file using our dedicated function.
    writeCircleDataToFile(cir, "circle.txt");
    
    return 0;
}
