#include <iostream>
#include <vector>
using namespace std;

bool isIncreasing(vector<int>& column) {
    for (int i = 1; i < column.size(); i++) {
        if (column[i] <= column[i - 1]) {
            return false;
        }
    }
    return true;
}

bool isDecreasing(vector<int>& column) {
    for (int i = 1; i < column.size(); i++) {
        if (column[i] >= column[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int M, N;
    cout << "Введите размеры матрицы: ";
    cin >> M >> N;

    vector<vector<int>> matrix(M, vector<int>(N));
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    bool isOrderedColumnExists = false;
    int maxElement = 0;
    for (int j = 0; j < N; j++) {
        vector<int> column;
        for (int i = 0; i < M; i++) {
            column.push_back(matrix[i][j]);
        }

        if (isIncreasing(column) || isDecreasing(column)) {
            isOrderedColumnExists = true;
            int currentMax = *max_element(column.begin(), column.end());
            if (currentMax > maxElement) {
                maxElement = currentMax;
            }
        }
    }

    if (isOrderedColumnExists) {
        cout << "Максимальный элемент среди упорядоченных столбцов: " << maxElement << endl;
    } else {
        cout << "Упорядоченные столбцы отсутствуют." << endl;
    }

    return 0;
}