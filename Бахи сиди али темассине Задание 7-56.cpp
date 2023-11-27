#include <iostream>
#include <vector>
using namespace std;

void swapMatrixHalves(vector<vector<int>>& matrix) {
    int N = matrix[0].size();
    int half = N / 2;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < half; j++) {
            swap(matrix[i][j], matrix[i][j + half]);
        }
    }
}

int main() {
    int M, N;
    cout << "Введите размеры матрицы: ";
    cin >> M >> N;

    if (N % 2 != 0) {
        cout << "Число столбцов должно быть четным" << endl;
        return 0;
    }

    vector<vector<int>> matrix(M, vector<int>(N));
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    swapMatrixHalves(matrix);

    cout << "Измененная матрица: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}