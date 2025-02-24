#include <iostream>
#include <cmath>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const {
        return M_PI * radius * radius;
    }

    double circumference() const {
        return 2 * M_PI * radius;
    }

    double diameter() const {
        return 2 * radius;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    std::cout << "Rectangle Area: " << rect.area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.perimeter() << std::endl;

    Circle circ(4.0);
    std::cout << "Circle Area: " << circ.area() << std::endl;
    std::cout << "Circle Circumference: " << circ.circumference() << std::endl;
    std::cout << "Circle Diameter: " << circ.diameter() << std::endl;

    return 0;
}