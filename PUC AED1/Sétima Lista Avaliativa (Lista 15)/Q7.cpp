#include <iostream>
#include <iomanip>
using namespace std;

class Car {
    const double tankCapacity = 50.0;
    const double fuelEfficiency = 15.0; 
    double fuelAmount;
    double totalDistance;

    public:
        Car() : fuelAmount(0.0), totalDistance(0.0) {}
    
        void refuel(double liters) {
            if (liters <= 0) {
                cout << "Error: Fuel amount must be positive" << endl;
                return;
            }
            
            double newFuelAmount = fuelAmount + liters;
            if (newFuelAmount > tankCapacity) {
                cout << "Warning: Tank overfilled. Setting to maximum capacity (" << tankCapacity << " liters)" << endl;
                fuelAmount = tankCapacity;
            } else {
                fuelAmount = newFuelAmount;
            }
        }
    
        void drive(double kilometers) {
            if (kilometers <= 0) {
                cout << "Error: Distance must be positive" << endl;
                return;
            }
    
            double fuelNeeded = kilometers / fuelEfficiency;
            
            if (fuelNeeded > fuelAmount) {
                double possibleDistance = fuelAmount * fuelEfficiency;
                cout << "Warning: Not enough fuel. Driving only " << possibleDistance << " km" << endl;
                totalDistance += possibleDistance;
                fuelAmount = 0;
            } else {
                totalDistance += kilometers;
                fuelAmount -= fuelNeeded;
            }
        }
    
        double getRemainingFuel() const {
            return fuelAmount;
        }
    
        double getTotalDistance() const {
            return totalDistance;
        }
};

int main() {
    
    Car car1, car2;

    car1.refuel(20.0);
    car2.refuel(30.0);
    
    car1.drive(200.0); 
    car2.drive(400.0); 

    cout << "Car 1 results:" << endl;
    cout << "Total distance traveled: " << car1.getTotalDistance() << " km" << endl;
    cout << "Remaining fuel: " << car1.getRemainingFuel() << " liters" << endl;

    cout << "Car 2 results:" << endl;
    cout << "Total distance traveled: " << car2.getTotalDistance() << " km" << endl;
    cout << "Remaining fuel: " << car2.getRemainingFuel() << " liters" << endl;

    return 0;
