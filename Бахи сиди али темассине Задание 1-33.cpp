#include <iostream>

int main() {
    double a, b, p;

    // Введите длину и ширину пластины, а также плотность
    std::cout << "Введите длину пластины (a): ";
    std::cin >> a;
    std::cout << "Введите ширину пластины (b): ";
    std::cin >> b;
    std::cout << "Введите плотность материала (p): ";
    std::cin >> p;

    // Вычислите массу пластины
    double mass = a * b * p;

    // Выведите результат
    std::cout << "Масса пластины: " << mass << " кг" << std::endl;

    return 0;
}