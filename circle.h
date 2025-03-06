// circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r);
    double getRadius() const;
    void setRadius(double r);

    void displayMenu() const;
    void processChoice(const Circle& myCircle);

    double getCircumference() const;
    double getArea() const;
    double getSectorArea(double angle) const;

    enum class OutputOption {
        Radius = 1,
        Circumference,
        Area,
        SectorArea
    };
};

#endif