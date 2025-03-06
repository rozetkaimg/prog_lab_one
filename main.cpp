<<<<<<< HEAD
#include "rectangle.cpp"
#include <iostream>

using namespace std;

enum class ShapeOption {
    Circle,
    Rectangle,
    Trapezoid
};

enum RectFunc {
    GetHeight = 1,
    GetWidth,
    GetPerimeter,
    GetDiagonal,
    GetArea,
    SetHeight,
    SetWidth,
};

void CircOption() // в разработке
{

}

void RectOption()
{
    int choice;
    Rectangle myRectangle(5, 10);
    while (true)
    {
        cout << "Выберите, что вывести:\n";
        cout << "1 - Высоту\n2 - Ширину\n3 - Периметр\n4 - Диагональ\n5 - Площадь\n6 - Ввести Высоту\n7 - Ввести Ширину\n0 - Выйти" << endl;
        cin >> choice;
        switch (choice)
        {
        case GetHeight:
            cout << "Высота: " << myRectangle.getHeight() << endl;
            break;
        case GetWidth:
            cout << "Ширина: " << myRectangle.getWidth() << endl;
            break;
        case GetPerimeter:
            cout << "Периметр: " << myRectangle.getPerimeter() << endl;
            break;
        case GetDiagonal:
            cout << "Диагональ: " << myRectangle.getDiagonal() << endl;
            break;
        case GetArea:
            cout << "Площадь: " << myRectangle.getArea() << std::endl;
            break;
        case SetHeight:
            int newHeight;
            cout << "Введите новую высоту: ";
            cin >> newHeight;
            myRectangle.setHeight(newHeight);
            cout << "Высота изменена на " << myRectangle.getHeight() << std::endl;
            break;
        case SetWidth:
            int newWidth;
            cout << "Введите новую ширину: ";
            cin >> newWidth;
            myRectangle.setWidth(newWidth);
            cout << "Ширина изменена на " << myRectangle.getWidth() << std::endl;
            break;
        case 0:
            return;
        default:
            cout << "Неверный выбор! Попробуйте снова." << std::endl;
            break;
=======
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
>>>>>>> stas
        }
    }
}


<<<<<<< HEAD
void TrapezOption(){} // в разработке

void shapeChoice() {
    int choise;
    while (true)
    {
        cout << "Выберите, что вывести:\n";
        cout << "1 - Круг\n2 - Прямоугольник\n3 - Трапеция\n0 - Выйти" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            CircOption();
            break;
        case 2:
            RectOption();
            break;
        case 3:
            TrapezOption();
        case 0:
            return;
        default:
            cout << "Неверный выбор! Попробуйте снова." << std::endl;
            break;
        }
    }
}


int main()
{
    shapeChoice();

    return 0;
}
=======
int main() {
    mainMenu();
    return 0;
}
>>>>>>> stas
