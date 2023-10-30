#include <iostream>

int main() {
    int number;
    int evenDigitCount = 0;

    // Введите число
    std::cout << "Введите число: ";
    std::cin >> number;

    // Проверьте, что введенное число неотрицательное
    if (number < 0) {
        std::cout << "Пожалуйста, введите неотрицательное число." << std::endl;
        return 1;
    }

    // Найдем количество четных цифр в числе
    int digit;
    while (number > 0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            evenDigitCount++;
        }
        number /= 10;
    }

    // Выведем результат
    std::cout << "Количество четных цифр в числе: " << evenDigitCount << std::endl;

    return 0;
}