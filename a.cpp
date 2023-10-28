#include <iostream>
#include <cmath>

using namespace std;

bool areConcyclic(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    int circleTest = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) * (x1 * (y2 - y4) + x2 * (y4 - y1) + x4 * (y1 - y2)) -
                     (x1 * (x2 - x3) + x2 * (x3 - x1) + x3 * (x1 - x2)) * (x1 * (x2 - x4) + x2 * (x4 - x1) + x4 * (x1 - x2));
    return circleTest == 0;
}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        if(x1 == 100 && y1 == -100 && x2 == 100 && y2 == -100 && 
           x3 == 100 && y3 == -100 && x4 == 100 && y4 == -100)
            break;
        if(areConcyclic(x1, y1, x2, y2, x3, y3, x4, y4))
            cout << "YES, POINTS ARE CONCYCLIC" << endl;
        else
            cout << "NO, POINTS ARE NOT CONCYCLIC" << endl;
    }
    return 0;
}
