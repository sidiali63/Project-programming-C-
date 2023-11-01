#include <iostream>
using namespace std;

void ShiftRight3(double &A, double &B, double &C) {
    double temp = C;
    C = B;
    B = A;
    A = temp;
}

int main() {
    double A1, B1, C1, A2, B2, C2;
    cout << "Enter the first set of three numbers: ";
    cin >> A1 >> B1 >> C1;
    cout << "Enter the second set of three numbers: ";
    cin >> A2 >> B2 >> C2;

    ShiftRight3(A1, B1, C1);
    ShiftRight3(A2, B2, C2);

    cout << "The shifted first set of three numbers is: " << A1 << " " << B1 << " " << C1 << endl;
    cout << "The shifted second set of three numbers is: " << A2 << " " << B2 << " " << C2 << endl;

    return 0;
}
