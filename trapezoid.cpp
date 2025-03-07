#include "trapezoid.h"
#include <cmath>

Trapezoid::Trapezoid(int t, int b, int l, int r, int h) : top(t), bottom(b), left(l), right(r), height(h){}

double Trapezoid::getArea() {
    return 0.5*(top + bottom)* height;
}

double Trapezoid::getPerimeter(){
    return top + bottom + left + right;
}

double Trapezoid::getMidline(){
    return (top + bottom)/2;
}

int Trapezoid::getTop(){
    return top;
}

int Trapezoid::getBottom(){
    return bottom;
}

int Trapezoid::getLeft(){
    return left;
}

int Trapezoid::getRight(){
    return right;
}

int Trapezoid::getHeight(){
    return height;
}



void Trapezoid::setTop(int newTop){
    top = newTop;
}

void Trapezoid::setBottom(int newBottom){
    bottom = newBottom;
}

void Trapezoid::setLeft(int newLeft){
    left = newLeft;
}

void Trapezoid::setRight(int newRight){
    right = newRight;
}

void Trapezoid::setHeight(int newHeight){
    height = newHeight;
}