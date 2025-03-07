#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid {
private:
    int top, bottom, left, right;

public:
    Trapezoid (int t, int b, int l, int r);

    int getTop();
    int getBottom();
    int getLeft();
    int getRight();

    void setTop(int top);
    void setBottom(int bottom);
    void setLeft(int left);
    void setRight(int right);

    double getArea();
    double getPerimeter();
    double getMidline();
};

#endif // TRAPEZOID_H
