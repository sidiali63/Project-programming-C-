#include <iostream>
#include <cmath>
using namespace std;

double RingS(double R1, double R2) {
    if (R1 <= R2) {
        cout << "Invalid input: R1 must be greater than R2" << endl;
        return -1;
    }
    return 3.14 * (R1 * R1 - R2 * R2);
}

int main() {
    double A1, B1, C1, A2, B2, C2;
    cout << "Enter the first set of three numbers (A1, B1, C1): ";
    cin >> A1 >> B1 >> C1;
    cout << "Enter the second set of three numbers (A2, B2, C2): ";
    cin >> A2 >> B2 >> C2;

    double S1 = RingS(A1, B1);
    double S2 = RingS(A2, B2);
    double S3 = RingS(C1, C2);

     if(S1 > 0) {
        cout << "Area of ring 1: " << S1 << endl;
    }
    if(S2 > 0) {
        cout << "Area of ring 2: " << S2 << endl;
    }
    if (S3 > 0) {
        cout << "Area of ring 3: " << S3 << endl;
    }

    return 0;
}