#include <iostream>
#include <string>
using namespace std;
#include "square.h"

Square::Square(double side) {
    sideOfSquare = side;
}

double Square::getPerimeter(){
    return (sideOfSquare * 4);
}

double Square::getArea(){
    return (sideOfSquare * sideOfSquare);
}
        
double Square::getside(){
    return sideOfSquare;
}

void Square::setSide(double side){
    sideOfSquare = side;
}