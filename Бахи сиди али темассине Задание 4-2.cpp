#include <iostream>

int main() {
    int number;
    int sum = 0;

    // Введите число 
    std::cout << "Введите число: ";
    std::cin >> number;

    // Проверьте, что введенное число положительное 
    if (number <= 0) {
        std::cout << "Пожалуйста, введите положительное число." << std::endl;
        return 1;
    }

    // Найдем сумму всех четных чисел от 1 до введенного числа 
    for (int i = 2; i <= number; i += 2) {
        sum += i;
    }

    // Выведем результат 
    std::cout << "Сумма четных чисел от 1 до " << number << " равна: " << sum << std::endl;

    return 0;
}