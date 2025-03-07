#include "circle.h"
#include "rectangle.h"
#include "trapezoid.h"
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
    SetHeight = 1,
    SetWidth,
    GetHeight,
    GetWidth,
    GetPerimeter,
    GetDiagonal,
    GetArea,
  };

enum trapFunc
{
    GetTrTop = 1,
    GetTrBottom,
    GetTrLeft,
    GetTrRight,
    GetTrHeight,
    GetTrArea,
    GetTrPerimeter,
    GetTrMidline,
    SetTrTop,
    SetTrBottom,
    SetTrLeft,
    SetTrRight,
    SetTrHeight,
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
            "1 - Ввести Высоту\n2 - Ввести Ширину\n3 - Высоту\n4 - Ширину\n5 - Периметр\n6 - Диагональ\n7 - Площадь\n0 - Выйти"
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

void TrapezFunc(){
    int choice;
    Trapezoid myTrapezoid(5, 10, 5, 10, 5);
    while (true)
    {
        cout << "Выберите, что вывести:\n";
        cout <<
            "1 - Верх\n2 - Низ\n3 - Лево\n4 - Право\n5 - Высота\n6 - Площадь\n7 - Периметр\n8 - Средняя линия\n9 - Ввести Верх\n10 - Ввести Низ\n11 - Ввести Лево\n12 - Ввести Право\n13 - Ввести Высоту\n0 - Выйти"
            << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Верх: " << myTrapezoid.getTop() << endl;
            break;
        case 2:
            cout << "Низ: " << myTrapezoid.getBottom() << endl;
            break;
        case 3:
            cout << "Лево: " << myTrapezoid.getLeft() << endl;
            break;
        case 4:
            cout << "Право: " << myTrapezoid.getRight() << endl;
            break;
        case 5:
            cout << "Высота: " << myTrapezoid.getHeight() << endl;
            break;
        case 6:
            cout << "Площадь: " << myTrapezoid.getArea() << endl;
            break;
        case 7:
            cout << "Периметр: " << myTrapezoid.getPerimeter() << endl;
            break;
        case 8:
            cout << "Средняя линия: " << myTrapezoid.getMidline() << endl;
            break;
        case 9:
            int newTop;
            cout << "Введите новый верх: ";
            cin >> newTop;
            if (newTop < 0)
            {
                cout << "Верх не может быть отрицательным. Попробуйте снова." << endl;
                break;
            }
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
            TrapezFunc();
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