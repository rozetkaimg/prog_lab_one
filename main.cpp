#include "circle.h"
#include <iostream>
#include <iomanip>

enum class ShapeOption {
    Circle = 1,
    Rectangle,
    Trapezoid,
    Exit
};

void mainCircleFunction() {
    std::cout << "Введите радиус: " << std::endl;
    int input_radius = 0;


    while (!(std::cin >> input_radius) || input_radius < 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка! Введите корректное значение радиуса (неотрицательное число): " << std::endl;
    }

    Circle myCircle(input_radius);
    myCircle.processChoice(myCircle);
}

void mainMenu() {
    while (true) {
        std::cout << "Выберите фигуру:\n";
        std::cout << "1 - Круг\n2 - Прямоугольник\n3 - Трапеция\n4 - Выход" << std::endl;

        int choice;
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка! Введите число от 1 до 4." << std::endl;
            continue;
        }

        ShapeOption shape = static_cast<ShapeOption>(choice);

        switch (shape) {
            case ShapeOption::Circle:
                mainCircleFunction();
            break;
            case ShapeOption::Rectangle:
                std::cout << "Функция для прямоугольника в разработке.\n" << std::endl;
            break;
            case ShapeOption::Trapezoid:
                std::cout << "Функция для трапеции в разработке.\n" << std::endl;
            break;
            case ShapeOption::Exit:
                return;
            default:
                std::cout << "Неверный выбор! Попробуйте снова.\n" << std::endl;
        }
    }
}


int main() {
    mainMenu();
    return 0;
}
