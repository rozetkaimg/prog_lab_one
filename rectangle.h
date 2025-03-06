#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    private:
      int width, height;

    public:
      double getHeight();
      double getWidth();

      void setHeight(int height);
      void setWidth(int width);

      double getArea();
      double getPerimeter();
      double getDiagonal();
};



#endif //RECTANGLE_H
