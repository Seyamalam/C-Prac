#include<bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C;
    int D;
    const double VAT = 15.0;

    while (cin >> A >> B >> C >> D) {
        if (A == 0 && B == 0 && C == 0 && D == 0) {
            break;
        }
        double WtVAT = A + B + C;
        double WithVAT = WtVAT + (WtVAT * VAT / 100.0);
        double discAmount = WtVAT * D / 100.0;
        double finalAmount = WithVAT - discAmount;
        cout << fixed << setprecision(2) << finalAmount << endl;
    }
    return 0;
}
