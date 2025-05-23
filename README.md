# Геометрические фигуры

Этот проект на C++ предоставляет классы для работы с различными геометрическими фигурами.

## Функциональность

Проект включает в себя следующие классы:

* **Прямоугольник (Rectangle)**:
    * Расчет периметра.
    * Расчет площади.
    * Расчет длины диагонали.
* **Трапеция (Trapezoid)**:
    * Расчет периметра.
    * Расчет площади.
    * Расчет длины средней линии.
* **Окружность (Circle)**:
    * Расчет длины окружности.
    * Расчет площади круга.
    * Расчет площади кругового сектора.

## Использование

1.  Клонируйте репозиторий:

    ```bash
    git clone https://github.com/rozetkaimg/prog_lab_one/tree/main
    ```

2.  Скомпилируйте проект с помощью вашего компилятора C++ (например, g++):

    ```bash
    g++ main.cpp rectangle.cpp triangle.cpp  circle.cpp -o geometry
    ```

3.  Запустите исполняемый файл:

    ```bash
    ./geometry
    ```

## Структура проекта

geometry/
├── main.cpp
├── rectangle.cpp
├── rectangle.h
├── trapezoid.cpp
├── trapezoid.h
├── circle.cpp
├── circle.h
└── README.md


* `main.cpp`: Основной файл программы.
* `rectangle.cpp`, `trapezoid.cpp`, , `circle.cpp`: Файлы реализации классов.
* `rectangle.h`, `trapezoid.h`, , `circle.h`: Заголовочные файлы классов.
* `README.md`: Этот файл.

## Авторы

* Капитонов Артем
* Клепиков Станислав
* Маренич Ростислав