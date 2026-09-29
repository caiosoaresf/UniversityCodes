#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Shape {
    public:
        virtual double calculateArea() const = 0; 
        virtual ~Shape() {} 
};

class Rectangle : public Shape {
    double base;
    double height;

    public:
        Rectangle(double b, double h) : base(b), height(h) {}
    
        double calculateArea() const override {
            return base * height;
        }
};

class Triangle : public Shape {
    double base;
    double height;
    
    public:
        Triangle(double b, double h) : base(b), height(h) {}
    
        double calculateArea() const override {
            return (base * height) / 2.0;
        }
};

int main() {
    vector<Shape*> shapes;

    shapes.push_back(new Rectangle(5.0, 3.0)); 
    shapes.push_back(new Triangle(4.0, 6.0));   

    cout << "Areas:" << endl;
    for (size_t i = 0; i < shapes.size(); ++i) {
        cout << "Shape " << i + 1 << " area: " << shapes[i]->calculateArea() << endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }
    shapes.clear();

    return 0;
}
