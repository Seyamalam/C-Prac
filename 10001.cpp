#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string time;
    while (cin >> time) {
        int hour, minute;
        stringstream ss(time);
        char colon;
        ss >> hour >> colon >> minute;
        if (hour >= 0 && hour < 12) {
            if (hour == 0) {
                hour = 12;
            }
            cout << (hour < 10 ? "0" : "") << hour << ":"
                 << (minute < 10 ? "0" : "") << minute << " A.M." << endl;
        } else {
            if (hour > 12) {
                hour -= 12;
            }
            cout << (hour < 10 ? "0" : "") << hour << ":"
                 << (minute < 10 ? "0" : "") << minute << " P.M." << endl;
        }
    }
    return 0;
}
