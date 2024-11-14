#include <iostream>
#include <string>
using namespace std;

class car {
    public:
    car(string make, string model, int year);
    void setMake(string make);
    string getMake();
    void setModel(string model);
    string getModel();
    void setYear(int year);
    int getYear();
    void details();

    private:
    string makeCar;
    string modelValue;
    int yearVal;


};