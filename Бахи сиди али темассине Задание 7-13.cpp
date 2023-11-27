#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int A[MAX_SIZE][MAX_SIZE];
    int M;

    cout << "Введите порядок матрицы: ";
    cin >> M;

    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Элементы матрицы уголками: ";

    int direction = 1; // Направление движения (1 = вправо, -1 = влево)
    int i = 0, j = 0; // Индексы текущего элемента

    while (i < M && j < M) {
        cout << A[i][j] << " ";

        // Движение вправо
        if (direction == 1) {
            if (j < M - 1) {
                j++;
            } else {
                i++;
            }
        }
            // Движение влево
        else {
            if (j > 0) {
                j--;
            } else {
                i++;
            }
        }

        // Поменять направление, если достигнут конец строки или столбца
        if (j == M || j == -1) {
            direction *= -1;
            j += direction;
            i++;
        }
    }

    return 0;
}