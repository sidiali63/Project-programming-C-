#include <iostream>

int main() {
    double a, b, c;

    // Введите длины трех отрезков
    std::cout << "Введите длину первого отрезка: ";
    std::cin >> a;
    std::cout << "Введите длину второго отрезка: ";
    std::cin >> b;
    std::cout << "Введите длину третьего отрезка: ";
    std::cin >> c;

    // Проверим условие существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "Можно построить треугольник." << std::endl;
    } else {
        std::cout << "Нельзя построить треугольник с такими длинами отрезков." << std::endl;
    }

    return 0;
}