#include <iostream>

int main() {
    double speedOfSound;

    // Введите скорость звука в м/с
    std::cout << "Введите скорость звука в заданной среде (м/с): ";
    std::cin >> speedOfSound;

    // Определите среду на основе скорости звука при температуре +20 градусов
    std::string medium;

    if (speedOfSound == 1483) {
        medium = "вода";
    } else if (speedOfSound == 5500) {
        medium = "стекло";
    } else if (speedOfSound == 3850) {
        medium = "гранит";
    } else if (speedOfSound == 4700) {
        medium = "медь";
    } else if (speedOfSound == 340) {
        medium = "воздух";
    } else {
        medium = "неизвестная среда";
    }

    // Выведите результат
    if (medium != "неизвестная среда") {
        std::cout << "Среда с указанной скоростью звука: " << medium << std::endl;
    } else {
        std::cout << "Неизвестная среда или введена неверная скорость звука." << std::endl;
    }

    return 0;
}