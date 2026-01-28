#include<iostream>
using namespace std;

// Base Class
class Shape {
    public:
        virtual void area() {
            cout << "Calculating area of shape" << endl;
        }
};

// Derived Class 1: Circle
class Circle : public Shape {
    public:
        float radius;
        void area() {
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of circle: " << (22.0/7)*radius*radius << endl;
        }
};

// Derived Class 2: Triangle
class Triangle : public Shape {
    public:
        int base, height;
        void area() {
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Area of triangle: " << (base*height)/2.0 << endl;
        }
};

// Derived Class 3: Rectangle
class Rectangle : public Shape {
    public:
        int length, breadth;
        void area() {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
            cout << "Area of rectangle: " << length*breadth << endl;
        }
};

// Derived Class 4: Square
class Square : public Shape {
    public:
        int length;
        void area() {
            cout << "Enter length: ";
            cin >> length;
            cout << "Area of square: " << length*length << endl;
        }
};

int main() {
    cout << "Select shape to calculate area: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Square" << endl;
    cout << "Enter choice between 1-4: ";

    int choice;
    cin >> choice;

    Shape* shape = nullptr;

    switch(choice) {
        case 1:
            shape = new Circle();
            break;
        case 2:
            shape = new Triangle();
            break;
        case 3:
            shape = new Rectangle();
            break;
        case 4:
            shape = new Square();
            break;
        default:
            cout << "Please enter the choice among the following options only!!!" << endl;
    }

    if(shape != nullptr) {
        shape->area();  // Polymorphism in action
        delete shape;
    }

    return 0;
}
