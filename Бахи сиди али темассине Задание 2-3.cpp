#include <iostream>

int main() {
    double num1, num2, num3, num4;

    // Введите четыре числа
    std::cout << "Введите четыре вещественных числа: ";
    std::cin >> num1 >> num2 >> num3 >> num4;

    // Найдем два наименьших числа
    double min1, min2;

    if (num1 < num2) {
        min1 = num1;
        min2 = num2;
    } else {
        min1 = num2;
        min2 = num1;
    }

    if (num3 < min1) {
        min2 = min1;
        min1 = num3;
    } else if (num3 < min2) {
        min2 = num3;
    }

    if (num4 < min1) {
        min2 = min1;
        min1 = num4;
    } else if (num4 < min2) {
        min2 = num4;
    }

    // Найдем произведение двух наименьших чисел
    double product = min1 * min2;

    // Выведите результат
    std::cout << "Произведение двух наименьших чисел: " << product << std::endl;

    return 0;
}