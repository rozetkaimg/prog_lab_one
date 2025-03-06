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
        }
    }
}


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
        }
    }
}


int main()
{
    shapeChoice();

    return 0;
}