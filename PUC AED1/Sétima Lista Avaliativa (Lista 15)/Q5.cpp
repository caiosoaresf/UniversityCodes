#include <iostream>
#include <iomanip>
using namespace std;

class Television {
    int currentChannel;
    int currentVolume;
    const int MIN_VOLUME = 0;
    const int MAX_VOLUME = 100;
    const int MIN_CHANNEL = 1;

    public:
        Television() : currentChannel(1), currentVolume(0) {}
    
        void increaseVolume() {
            if (currentVolume < MAX_VOLUME) {
                currentVolume++;
                cout << "Volume increased to: " << currentVolume << endl;
            } else {
                cout << "Volume is already at maximum (" << MAX_VOLUME << ")" << endl;
            }
        }
    
        void decreaseVolume() {
            if (currentVolume > MIN_VOLUME) {
                currentVolume--;
                cout << "Volume decreased to: " << currentVolume << endl;
            } else {
                cout << "Volume is already at minimum (" << MIN_VOLUME << ")" << endl;
            }
        }
    
        void channelUp() {
            currentChannel++;
            cout << "Changed to channel: " << currentChannel << endl;
        }
    
        void channelDown() {
            if (currentChannel > MIN_CHANNEL) {
                currentChannel--;
                cout << "Changed to channel: " << currentChannel << endl;
            } else {
                cout << "Already on lowest channel (" << MIN_CHANNEL << ")" << endl;
            }
        }
    
        void changeChannel(int newChannel) {
            if (newChannel >= MIN_CHANNEL) {
                currentChannel = newChannel;
                cout << "Changed directly to channel: " << currentChannel << endl;
            } else {
                cout << "Invalid channel number (" << newChannel << ")" << endl;
            }
        }
    
        void displayStatus() {
            cout << "\nCurrent TV Status:" << endl;
            cout << "Channel: " << currentChannel << endl;
            cout << "Volume: " << currentVolume << endl;
        }
};

int main() {
    Television myTV;

    myTV.displayStatus();

    cout << "\nChanging channels:" << endl;
    myTV.channelUp();     
    myTV.channelUp();     
    myTV.channelDown();    
    myTV.changeChannel(5);
    myTV.channelDown();  

    cout << "\nAdjusting volume:" << endl;
    myTV.increaseVolume();
    myTV.increaseVolume();
    myTV.decreaseVolume();

    myTV.displayStatus();

    return 0;
}
