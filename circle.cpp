// circle.cpp
#include "circle.h"
#include <cmath>
#include <iostream>
#include <iomanip>

Circle::Circle(double r) {
    setRadius(r);
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r) {
    if (r >= 0) {
        radius = r;
    } else {
        std::cerr << "Ошибка: радиус не может быть отрицательным. Установлено значение по умолчанию (0)." << std::endl;
        radius = 0;
    }
}

double Circle::getCircumference() const {
    return 2 * M_PI * radius;
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

double Circle::getSectorArea(double angle) const {
    return (angle / 360.0) * getArea();
}

void Circle::displayMenu() const {
    std::cout << "Выберите, что вывести:\n";
    std::cout << "1 - Радиус\n2 - Длина окружности\n3 - Площадь круга\n4 - Площадь сектора (45 градусов)" << std::endl;
}

void Circle::processChoice(const Circle& myCircle) {
    enum class OutputOption {
        Radius = 1,
        Circumference,
        Area,
        SectorArea
    };

    int choice;
    while (true) {
        displayMenu();
        std::cout << "Введите ваш выбор: ";
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка! Введите число от 1 до 4." << std::endl;
            continue;
        }

        OutputOption option = static_cast<OutputOption>(choice);

        std::cout << std::fixed << std::setprecision(2);
        switch (option) {
            case OutputOption::Radius:
                std::cout << "Радиус: " << myCircle.getRadius() << std::endl;
                return;
            case OutputOption::Circumference:
                std::cout << "Длина окружности: " << myCircle.getCircumference() << std::endl;
                return;
            case OutputOption::Area:
                std::cout << "Площадь круга: " << myCircle.getArea() << std::endl;
                return;
            case OutputOption::SectorArea:
                std::cout << "Площадь сектора (угол 45 градусов): " << myCircle.getSectorArea(45) << std::endl;
                return;
            default:
                std::cout << "Неверный выбор! Попробуйте снова." << std::endl;
        }
    }
}
