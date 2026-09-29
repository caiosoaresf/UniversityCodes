#include <iostream>
#include <iomanip>
using namespace std;

class Clock {
    int seconds;
    int minutes;
    int hours;
    
public:
    Clock() : seconds(0), minutes(0), hours(0) {}
    
    void setTime(int s, int m, int h) {
        seconds = s % 60;
        minutes = (m + s/60) % 60;
        hours = (h + (m + s/60)/60) % 24;
    }
    
    void getTime(int &s, int &m, int &h) {
        s = seconds;
        m = minutes;
        h = hours;
    }
    
    void addTime(int additionalSeconds) {
        seconds += additionalSeconds;
        minutes += seconds / 60;
        seconds %= 60;
        hours += minutes / 60;
        minutes %= 60;
    }
};

int main() {
    Clock c;
    
    c.setTime(45, 30, 14);
    
    int s, m, h;
    c.getTime(s, m, h);
    cout << "Time: " << h << ":" << m << ":" << s << endl;
    
    c.addTime(3675);
    
    c.getTime(s, m, h);
    cout << "New time: " << h << ":" << m << ":" << s << endl;
    
    return 0;
}
