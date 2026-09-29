#include <iostream>
#include <iomanip>
using namespace std;

class AirConditioner {
    double externalTemperature;
    int powerLevel;

    public:
        AirConditioner() : externalTemperature(0.0), powerLevel(0) {}
    
        void setExternalTemperature(double temp) {
            externalTemperature = temp;
        }
    
        void setPowerLevel(int level) {
            if (level < 0 || level > 10) {
                cout << "Error: Power level must be between 0 and 10" << endl;
                return;
            }
            powerLevel = level;
        }
    
        double calculateRoomTemperature() {
            const double coolingPerLevel = 1.8;
            double maxCooling = powerLevel * coolingPerLevel;
            
            double resultingTemp = externalTemperature - maxCooling;
            if (resultingTemp < (externalTemperature - 18.0)) {
                resultingTemp = externalTemperature - 18.0;
            }
            if (resultingTemp < 0) {
                resultingTemp = 0;
            }
            
            return resultingTemp;
        }
};

int main() {
    AirConditioner ac1, ac2;

    ac1.setExternalTemperature(25.0); 
    ac2.setExternalTemperature(31.0);  

    ac1.setPowerLevel(5);     
    ac2.setPowerLevel(10); 

    cout << "AC 1:" << endl;
    cout << "Power level: 5" << endl;
    cout << "Temperature: 25°C" << endl;
    cout << "Room temperature: " << ac1.calculateRoomTemperature() << "°C" << endl;

    cout << "AC 2:" << endl;
    cout << "Power level: 10" << endl;
    cout << "Temperature: 31°C" << endl;
    cout << "Room temperature: " << ac2.calculateRoomTemperature() << "°C" << endl;

    return 0;
}
