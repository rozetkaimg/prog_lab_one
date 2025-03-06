#include "rectangle.h"
#include <cmath>

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

double Rectangle::getArea() {
    return width * height;
}

double Rectangle::getPerimeter() {
    return 2 * (width + height);
}

double Rectangle::getDiagonal() {
    return sqrt(width * width + height * height);
}

int Rectangle::getHeight() {
    return height;
}

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setHeight(int newHeight) {
    height = newHeight;
}

void Rectangle::setWidth(int newWidth) {
    width = newWidth;
}