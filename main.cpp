#include "circle.h"
#include "rectangle.h"
#include <iostream>
#include <iomanip>

using namespace std;

enum class ShapeOption
{
    Circle = 1,
    Rectangle,
    Trapezoid,
    Exit = 0
};

enum RectFunc
{
    GetHeight = 1,
    GetWidth,
    GetPerimeter,
    GetDiagonal,
    GetArea,
    SetHeight,
    SetWidth,
};

void mainCircleFunction()
{
    cout << "Введите радиус: " << endl;
    int input_radius = 0;

    while (!(cin >> input_radius) || input_radius < 0)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Ошибка! Введите корректное значение радиуса (неотрицательное число): " << endl;
    }

    Circle myCircle(input_radius);
    myCircle.processChoice(myCircle);
}

void RectOption()
{
    int choice;
    Rectangle myRectangle(5, 10);
    while (true)
    {
        cout << "Выберите, что вывести:\n";
        cout <<
            "1 - Высоту\n2 - Ширину\n3 - Периметр\n4 - Диагональ\n5 - Площадь\n6 - Ввести Высоту\n7 - Ввести Ширину\n0 - Выйти"
            << endl;
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
            cout << "Площадь: " << myRectangle.getArea() << endl;
            break;
        case SetHeight:
            int newHeight;
            cout << "Введите новую высоту: ";
            cin >> newHeight;
            if (newHeight < 0)
            {
                cout << "Высота не может быть отрицательной. Попробуйте снова." << endl;
                break;
            }
            myRectangle.setHeight(newHeight);
            cout << "Высота изменена на " << myRectangle.getHeight() << endl;
            break;
        case SetWidth:
            int newWidth;
            cout << "Введите новую ширину: ";
            cin >> newWidth;
            if (newHeight < 0)
            {
                cout << "Ширина не может быть отрицательной. Попробуйте снова." << endl;
                break;
            }
            myRectangle.setWidth(newWidth);
            cout << "Ширина изменена на " << myRectangle.getWidth() << endl;
            break;
        case 0:
            return;
        default:
            cout << "Неверный выбор! Попробуйте снова." << endl;
            break;
        }
    }
}


void mainMenu()
{
    while (true)
    {
        cout << "Выберите фигуру:\n";
        cout << "1 - Круг\n2 - Прямоугольник\n3 - Трапеция\n0 - Выход" << endl;

        int choice;
        cin >> choice;

        ShapeOption shape = static_cast<ShapeOption>(choice);

        switch (shape)
        {
        case ShapeOption::Circle:
            mainCircleFunction();
            break;
        case ShapeOption::Rectangle:
            RectOption();

            break;
        case ShapeOption::Trapezoid:
            cout << "Функция для трапеции в разработке.\n" << endl;
            break;
        case ShapeOption::Exit:
            return;
        default:
            cout << "Неверный выбор! Попробуйте снова.\n" << endl;
            break;
        }
    }
}


int main()
{
    mainMenu();
    return 0;
}
