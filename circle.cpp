#include "circle.h"
#include <cmath>

Circle::Circle(double r) : radius(r) {}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getCircumference() const {
    return 2 * M_PI * radius;
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

double Circle::getSectorArea(double angle) const {
    return (angle / 360) * getArea();
}