#include <iostream>
#include <iomanip>
using namespace std;

class Elevator {
    int currentFloor;  
    int maxFloors;
    int capacity;
    int occupation;
    
    public:
        Elevator() : currentFloor(0), maxFloors(0), capacity(0), occupation(0) {}
        
        void Initialize(int floors, int cap) {
            currentFloor = 0;
            maxFloors = floors;
            capacity = cap;
            occupation = 0;
            cout << "Elevator initialized:" << endl
                 << "- Total floors: " << maxFloors << endl
                 << "- Capacity: " << capacity << endl
                 << "- Current floor: " << currentFloor << endl
                 << "- Occupation: " << occupation << endl;
        }
        
        void Enter() {
            if (occupation < capacity) {
                occupation++;
                cout << "Current occupation: " << occupation << endl;
            }
            else {
                cout << "The elevator is at maximum capacity" << endl;
            }
        }
        
        void Leave() {
            if (occupation != 0) {
                occupation--;
                cout << "Current occupation: " << occupation << endl;
            }
            else {
                cout << "The elevator has no passengers" << endl;
            }
        }
        
        void Ascend() {
            if (currentFloor < maxFloors) {
                currentFloor++;
                cout << "Ascended to floor " << currentFloor << endl;
            }
            else {
                cout << "The elevator is at the highest floor" << endl;
            }
        }
        
        void Descend() {
            if (currentFloor != 0) {
                currentFloor--;
                cout << "Descended to floor " << currentFloor << endl;
            }
            else {
                cout << "The elevator is at ground floor" << endl;
            }
        }
        
        int getFloor() {return currentFloor;}
        int getMaxFloors() { return maxFloors;}
        int getCapacity() { return capacity;}
        int getOccupation() { return occupation;}
};

int main() {
    Elevator e;
    e.Initialize(20, 12);
    
    int n = 1;
    
    while (n >= 1 && n <= 4) {
        cout << "\nWhat do you want to do (1-4)?" << endl
             << "1 - Add a person" << endl
             << "2 - Remove a person" << endl
             << "3 - Ascend" << endl
             << "4 - Descend" << endl
             << "Any other char - Exit" << endl;
        cin >> n;
        
        if (n == 1) {
            e.Enter();
        }
        else if (n == 2) {
            e.Leave();
        }
        else if (n == 3) {
            e.Ascend();
        }
        else if (n == 4) {
            e.Descend();
        }
        
        if (n >= 1 && n <= 4) {
            cout << "\nCurrent status:" << endl
                 << "Floor: " << e.getFloor() << endl
                 << "Occupation: " << e.getOccupation() << endl;
        }
    }
    return 0;
}
