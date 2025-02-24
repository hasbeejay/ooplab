#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle {
public:
    void setCenter(int, int);
    void setRadius(float);
    double findArea();
    double findCircumference();
    void printCircleStats(); // Outputs the radius and center of the circle.
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

void Circle::printCircleStats() {
    cout << "Circle Center: (" << center_x << ", " << center_y << ")" << endl;
    cout << "Circle Radius: " << radius << endl;
}

int main() {
    Circle cir;
    float r;
    int x, y;
    
    // Prompt user for the circle's radius.
    cout << "Enter the radius of the circle: ";
    cin >> r;
    
    // Prompt user for the circle's center coordinates.
    cout << "Enter the center coordinates (x and y): ";
    cin >> x >> y;
    
    cir.setRadius(r);
    cir.setCenter(x, y);
    
    cout << "\nThe area of the circle is " << cir.findArea() << endl;
    cout << "The circumference of the circle is " << cir.findCircumference() << endl;
    cir.printCircleStats();
    
    return 0;
}
