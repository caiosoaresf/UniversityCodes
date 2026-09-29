#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class SimpleCircle {
    double radius;
    double centerX;
    double centerY;

    double calculateArea() {
        return M_PI * radius * radius;
    }

    double calculateCircumference() {
        return 2 * M_PI * radius;
    }

    double calculateCenterDistance(const SimpleCircle& other) {
        double dx = centerX - other.centerX;
        double dy = centerY - other.centerY;
        return sqrt(dx*dx + dy*dy);
    }

    public:
        SimpleCircle() : radius(1.0), centerX(0.0), centerY(0.0) {}
    
        void setRadius(double newRadius) {
            if (newRadius > 0) {
                radius = newRadius;
            }
        }
    
        void increaseRadius(double percentage) {
            if (percentage > 0) {
                radius *= (1 + percentage/100);
            }
        }
    
        void setCenter(double x, double y) {
            centerX = x;
            centerY = y;
        }
    
        void printRadius() {
            cout << "Radius: " << fixed << setprecision(2) << radius << endl;
        }
    
        void printCenter() {
            cout << "Center: (" << fixed << setprecision(2) << centerX << ", " << centerY << ")" << endl;
        }
    
        void printArea() {
            cout << "Area: " << fixed << setprecision(2) << calculateArea() << endl;
        }
    
        void printAll() {
            printRadius();
            printCenter();
            printArea();
            cout << "Circumference: " << fixed << setprecision(2) << calculateCircumference() << endl;
        }
    
        void distanceTo(const SimpleCircle& other) {
            cout << "Distance between centers: " << fixed << setprecision(2) 
                 << calculateCenterDistance(other) << endl;
        }
};

int main() {
    SimpleCircle circle1, circle2;

    cout << "Testing Circle 1" << endl;
    circle1.setRadius(5.0);
    circle1.setCenter(2.0, 3.0);
    circle1.printAll();

    cout << "Testing Circle 2" << endl;
    circle2.setRadius(3.0);
    circle2.setCenter(6.0, 8.0);
    circle2.printAll();

    circle1.increaseRadius(20);
    cout << "20% radius increase:" << endl;
    circle1.printRadius();

    cout << "Distance between circles:" << endl;
    circle1.distanceTo(circle2);

    return 0;
}
