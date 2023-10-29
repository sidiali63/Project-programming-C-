#include <iostream>

int main() {
    int number;

    // Введите трехзначное число
    std::cout << "Введите трехзначное число: ";
    std::cin >> number;

    if (number >= 100 && number <= 999) {
        // Извлеките цифры из числа
        int digit1 = number / 100;
        int digit2 = (number / 10) % 10;
        int digit3 = number % 10;

        // Проверьте, есть ли одинаковые цифры
        if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
            std::cout << "Среди цифр числа есть одинаковые." << std::endl;
        } else {
            std::cout << "Среди цифр числа нет одинаковых." << std::endl;
        }
    } else {
        std::cout << "Это не трехзначное число." << std::endl;
    }

    return 0;
}