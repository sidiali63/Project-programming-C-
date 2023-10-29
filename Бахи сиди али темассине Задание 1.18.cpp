#include <iostream>
#include <cmath>

int main() {
    double num1, num2;

    // Введите два числа
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    // Найдем среднее арифметическое кубов этих чисел
    double averageCube = (pow(num1, 3) + pow(num2, 3)) / 2.0;

    // Найдем среднее геометрическое модулей этих чисел
    double geometricMean = sqrt(fabs(num1) * fabs(num2));

    // Вывод результатов
    std::cout << "Среднее арифметическое кубов чисел: " << averageCube << std::endl;
    std::cout << "Среднее геометрическое модулей чисел: " << geometricMean << std::endl;

    return 0;
}