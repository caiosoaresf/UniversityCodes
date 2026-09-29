#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Vehicle {
    protected:
        double weight;
        double maxSpeed;
        double price;
    
    public:
        Vehicle(double w = 0, double s = 0, double p = 0) : weight(w), maxSpeed(s), price(p) {}
    
        double getWeight() const { return weight; }
        double getMaxSpeed() const { return maxSpeed; }
        double getPrice() const { return price; }
    
        void setWeight(double w) { weight = w; }
        void setMaxSpeed(double s) { maxSpeed = s; }
        void setPrice(double p) { price = p; }
    
        virtual void print() const {
            cout << "Vehicle Specifications:" << endl;
            cout << "Weight: " << weight << " kg" << endl;
            cout << "Max Speed: " << maxSpeed << " km/h" << endl;
            cout << "Price: $" << price << endl;
        }
};

class Engine {
    protected:
        int cylinders;
        double power;
    
    public:
        Engine(int c = 0, double p = 0) : cylinders(c), power(p) {}
    
        int getCylinders() const { return cylinders; }
        double getPower() const { return power; }
    
        void setCylinders(int c) { cylinders = c; }
        void setPower(double p) { power = p; }
    
        virtual void print() const {
            cout << "Engine Specifications:" << endl;
            cout << "Cylinders: " << cylinders << endl;
            cout << "Power: " << power << " hp" << endl;
        }
};

class PassengerCar : public Vehicle, public Engine {
    string model;
    string color;

    public:
        PassengerCar(double w = 0, double s = 0, double p = 0, int c = 0, double pow = 0, string m = "", string col = ""): Vehicle(w, s, p), Engine(c, pow), model(m), color(col) {}
    
        string getModel() const { return model; }
        string getColor() const { return color; }
    
        void setModel(string m) { model = m; }
        void setColor(string c) { color = c; }
    
        void print() const override {
            cout << "Passenger Car Details:" << endl;
            Vehicle::print();
            Engine::print();
            cout << "Model: " << model << endl;
            cout << "Color: " << color << endl;
        }
};

class Truck : public Vehicle, public Engine {
    private:
        double tonnage;
        double maxHeight;
        double length;
    
    public:
        Truck(double w = 0, double s = 0, double p = 0,
              int c = 0, double pow = 0,
              double t = 0, double h = 0, double l = 0)
            : Vehicle(w, s, p), Engine(c, pow), 
              tonnage(t), maxHeight(h), length(l) {}
    
        double getTonnage() const { return tonnage; }
        double getMaxHeight() const { return maxHeight; }
        double getLength() const { return length; }
    
        void setTonnage(double t) { tonnage = t; }
        void setMaxHeight(double h) { maxHeight = h; }
        void setLength(double l) { length = l; }
    
        void print() const override {
            cout << "\nTruck Details:" << endl;
            Vehicle::print();
            Engine::print();
            cout << "Tonnage: " << tonnage << " tons" << endl;
            cout << "Max Height: " << maxHeight << " m" << endl;
            cout << "Length: " << length << " m" << endl;
        }
};

int main() {
    Vehicle vehicle(1500, 180, 25000);
    Engine engine(4, 150);
    PassengerCar car(1200, 200, 35000, 6, 220, "Sedan", "Red");
    Truck truck(8000, 120, 80000, 8, 450, 15, 3.5, 12);

    cout << "Vehicle" << endl;
    vehicle.print();

    cout << "Engine" << endl;
    engine.print();

    car.print();
    truck.print();

    return 0;
}
