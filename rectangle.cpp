#include "rectangle.h"
#include <cmath>

Rect::Rectangle(int w, int h) : width(w), height(h) {

    double Rectangle::getArea() {
      return w * ;
    }

    double Rectangle::getPerimeter() {
      return 2 * (w + h);
    }

    double Rectangle::getDiagonal() {
      return sqrt(w**2 + h**2);
    }

    double Rectangle::geth() {
      return h;
    }

    double Rectangle::getw() {
      return w;
    }

    void Rectangle::seth(double newHeight) {
      h = newHeight;
    }
    
    void Rectangle::setw(double newWidth) {
      w = newWidth;
    }

}


