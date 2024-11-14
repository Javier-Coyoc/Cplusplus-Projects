#include <iostream>
#include <string>
using namespace std;

class Square{
    public:
        Square(double side);
        double getPerimeter();
        double getArea();
        double getside();
        void setSide(double side);

    private:
        double sideOfSquare;
};