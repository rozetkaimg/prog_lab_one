#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;

public:
    Circle(double r);

    double getRadius() const;
    void setRadius(double r);

    double getCircumference() const;
    double getArea() const;
    double getSectorArea(double angle) const;
};

#endif