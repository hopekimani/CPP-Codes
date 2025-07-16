/*
 Author:Hope Kimani
 Reg no:BBIT-01-0009/2025
 Description:Program to help calculate the body mass index.
 Date:16/07/2025
 Version 1
 */
#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
    virtual void area() {
        cout << "Area calculation not defined for generic shape." << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void area() {
        double result = length * width;
        cout << "Rectangle Area: " << result << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        double result = M_PI * radius * radius;
        cout << "Circle Area: " << result << endl;
    }
};

class PolymorphismTest {
public:
    void demonstrate() {
        Rectangle rect(5, 3);
        Shape* shapePtr = &rect;
        shapePtr->area();

        
        Circle circ(4);
        shapePtr = &circ;
        shapePtr->area();
    }
};

int main() {
    PolymorphismTest test;
    test.demonstrate();

    return 0;
}