#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int DigitN(int K, int N) {
    if (K < 0 || N < 1) {
        return -1;
    }

    int digits_count = log10(K) + 1;
    if (digits_count < N) {
        return -1;
    }

    for (int i = 1; i < N; i++) {
        K /= 10;
    }

    return K % 10;
}

int main() {
    vector<int> Ks = { 12345,  321, 90, 1000, 5673 };

    for (int i = 0; i < Ks.size(); i++) {
        cout << "DigitN(" << Ks[i] << ", " << i + 1 << "): ";
        cout << DigitN(Ks[i], i + 1) << endl;
    }

    return 0;
}