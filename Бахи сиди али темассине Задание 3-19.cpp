#include <iostream>

int main() {
    int noteNumber;

    // Введите номер музыкальной ноты
    std::cout << "Введите номер музыкальной ноты (1-7): ";
    std::cin >> noteNumber;

    // Определите словесное наименование ноты
    std::string noteName;
    switch (noteNumber) {
        case 1:
            noteName = "до";
            break;
        case 2:
            noteName = "ре";
            break;
        case 3:
            noteName = "ми";
            break;
        case 4:
            noteName = "фа";
            break;
        case 5:
            noteName = "соль";
            break;
        case 6:
            noteName = "ля";
            break;
        case 7:
            noteName = "си";
            break;
        default:
            noteName = "недопустимый номер ноты";
            break;
    }

    // Выведите результат
    std::cout << "Словесное наименование ноты: " << noteName << std::endl;

    return 0;
}