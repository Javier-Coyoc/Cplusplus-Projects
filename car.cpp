#include <iostream>
#include <string>
#include "car.h"
using namespace std;

car::car(string make, string model, int year) {
    makeCar = make;
    modelValue = model;
    yearVal = year;
}
void car::setMake(string make){
    makeCar = make;
}
string car::getMake(){
    return makeCar;
}
void car::setYear(int year){
    yearVal = year;
}
int car::getYear(){
    return yearVal;
}
void car::setModel(string model){
    modelValue = model;
}
string car::getModel(){
    return modelValue;
}
void car::details(){
    cout << "Car Brand:" << makeCar << endl << "Car model:" << modelValue << endl << "Year:" << yearVal << endl;
}