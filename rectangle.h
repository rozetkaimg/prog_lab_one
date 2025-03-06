#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h);

    int getHeight();
    int getWidth();

    void setHeight(int height);
    void setWidth(int width);

    double getArea();
    double getPerimeter();
    double getDiagonal();
};

#endif // RECTANGLE_H