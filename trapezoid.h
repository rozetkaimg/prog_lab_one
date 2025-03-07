#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid {
private:
    int top, bottom, left, right, height;

public:
    Trapezoid (int t, int b, int l, int r, int h);

    int getTop();
    int getBottom();
    int getLeft();
    int getRight();
    int getHeight();

    void setTop(int top);
    void setBottom(int bottom);
    void setLeft(int left);
    void setRight(int right);
    void setHeight(int height);

    double getArea();
    double getPerimeter();
    double getMidline();
};

#endif // TRAPEZOID_H
