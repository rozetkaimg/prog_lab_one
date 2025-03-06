#include "Rectangle.h"

enum shapes {
  circle,
  rectangle
};

enum rectFunction {
  getHeight,
  getWidth,
  getPerimeter,
  getDiagonal,
  getArea,
  setHeight,
  setWidth,
};


switch(shapes) {

  case circle:

      break;
  case rectangle:
    switch (rectFunction) {
      case setHeight:
        return setHeight();
        break;
      case setWidth:
        return setWidth();
        break;
      case getHeight:
        return getHeight();
        break;
      case getWidth:
        return getWidth();
        break;
      case getPerimeter:
        return getPerimeter();
        break;
      case getDiagonal:
        return getDiagonal();
        break;
      case getArea:
        return getArea();
        break;
      default:
        return "Error";

    }
}