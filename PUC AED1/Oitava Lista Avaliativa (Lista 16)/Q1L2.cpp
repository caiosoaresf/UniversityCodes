#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

class Point {
    double x, y;

    public:
        Point() : x(0), y(0) {}
        Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}
    
        void setPosition(double xCoord, double yCoord) {
            x = xCoord;
            y = yCoord;
        }
    
        double getX() const { return x; }
        double getY() const { return y; }
    
        double distanceTo(const Point& other) const {
            return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
        }
    
        double distanceTo(double xCoord, double yCoord) const {
            return sqrt(pow(x - xCoord, 2) + pow(y - yCoord, 2));
        }
};

class Circle : public Point {
    double radius;

    public:
        Circle() : Point(), radius(0) {}
        Circle(double x, double y, double r) : Point(x, y), radius(r) {}
    
        void setRadius(double r) {
            radius = r;
        }
    
        double getRadius() const {
            return radius;
        }
    
        double area() const {
            return PI * radius * radius;
        }
    
        double circumference() const {
            return 2 * PI * radius;
        }
};

class Wheel : public Circle {
    string material;
    int rimSize;
    string manufacturer;

    public:
        Wheel() : Circle(), rimSize(0) {}
        Wheel(double x, double y, double r, string mat, int rim, string manuf)
            : Circle(x, y, r), material(mat), rimSize(rim), manufacturer(manuf) {}
    
        void setSpecs(string mat, int rim, string manuf) {
            material = mat;
            rimSize = rim;
            manufacturer = manuf;
        }
    
        void printSpecs() const {
            cout << "Wheel specs:" << endl;
            cout << "Position: (" << getX() << ", " << getY() << ")" << endl;
            cout << "Radius: " << getRadius() << " units" << endl;
            cout << "Material: " << material << endl;
            cout << "Rim size: " << rimSize << " inches" << endl;
            cout << "Manufacturer: " << manufacturer << endl;
        }
};

class Sphere : public Circle {
    public:
        Sphere() : Circle() {}
        Sphere(double x, double y, double r) : Circle(x, y, r) {}
    
        double volume() const {
            return (4.0/3.0) * PI * pow(getRadius(), 3);
        }
};

int main() {
    Point p1;
    p1.setPosition(3, 4);
    Point p2(6, 8);
    cout << "Distance between points: " << p1.distanceTo(p2) << endl;

    Circle c1(0, 0, 5);
    cout << "Circle area: " << c1.area() << endl;
    cout << "Circle circumference: " << c1.circumference() << endl;

    Wheel w1(10, 10, 7, "Aluminum", 18, "Michelin");
    w1.printSpecs();

    Sphere s1(0, 0, 3);
    cout << "Sphere volume: " << s1.volume() << endl;

    return 0;
}
