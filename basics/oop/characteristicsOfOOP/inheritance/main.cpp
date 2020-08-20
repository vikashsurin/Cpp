#include <iostream>
using namespace std;

class Car
{
private:
    string Name;
    string Color;
    double Price;
    bool isBroken;

    //constructor
public:
    Car(string name, string color, double price)
    {
        Name = name;
        Color = color;
        Price = price;
        isBroken = false;
    }
    //methods
    void getInfo()
    {
        cout << "Name :" << Name << endl;
        cout << "Color :" << Color << endl;
        cout << "Price :" << Price << endl;
    }
    void crashCar()
    {
        cout << Name << " crashed" << endl;
        isBroken = true;
    }
    void repairCar()
    {
        cout << Name << " repaired" << endl;
        isBroken = false;
    }
    void move()
    {
        if (isBroken)
            cout << Name << " is broken" << endl;
        else
            cout << Name << " car is driving" << endl;
    }
};

/*
FLYING CAR  is derived class
CAR  is base class
public : whatever is public in car is also going to be public in FLYING CAR.

*/
class FlyingCar : public Car
{
public:
    FlyingCar(string name, string color, double price) : Car(name, color, price)
    {
    }
};

int main()
{
    Car ford("Ford", "red", 7000);
    Car ferrari("Ferrari", "blue", 7000);
    FlyingCar flyingCar("sky fury", "black", 500000);
    flyingCar.getInfo();
}