
#include <iomanip>
#include <iostream>

#include "circle.h"
int main() {
int menu_item = 0;
  std::cout << "Выберите:"  << std::endl;
  std::cout << "1) Круг"  << std::endl;
std::cin >> menu_item;
  std::cout  << std::endl;

switch (menu_item) {

  case 1: {
    std::cout << "Введите радиус:"  << std::endl;
    int innput_radius = 0;
    std::cin >> innput_radius;
    Circle myCircle(innput_radius);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Радиус: " << myCircle.getRadius() << std::endl;
    std::cout << "Длина окружности: " << myCircle.getCircumference() << std::endl;
    std::cout << "Площадь круга: " << myCircle.getArea() << std::endl;
    std::cout << "Площадь сектора (угол 45 градусов): " << myCircle.getSectorArea(45) << std::endl;
    return 0;
  }
}
  return 0;
}

