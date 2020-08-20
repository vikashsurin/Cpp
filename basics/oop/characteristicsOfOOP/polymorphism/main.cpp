#include <iostream>
using namespace std;

class Car
{
private:
    string Color;
    double Price;

protected: // these fields are available to all the inherited  classes.
    string Name;
    bool IsBroken;

    //constructor
public:
    Car(string name, string color, double price)
    {
        Name = name;
        Color = color;
        Price = price;
        IsBroken = false;
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
        IsBroken = true;
    }
    void repairCar()
    {
        cout << Name << " repaired" << endl;
        IsBroken = false;
    }
    void move()
    {
        if (IsBroken)
            cout << Name << " is broken" << endl;
        else
            cout << Name << " car is driving" << endl;
    }
};

/*
FLYING CAR  is derived class ; inheiitance
CAR  is base class
public : whatever is public in car is also going to be public in FLYING CAR.

*/
class FlyingCar : public Car
{
public:
    FlyingCar(string name, string color, double price) : Car(name, color, price)
    {
    }
    void move()
    {
        if (IsBroken)
            cout << Name << " is broken" << endl;
        else
            cout << Name << " car is flying" << endl;
    }
};

/**
 UNDERWATER CAR ;polymorphism
 **/
class UnderwaterCar : public Car
{
public:
    UnderwaterCar(string name, string color, double price) : Car(name, color, price)
    {
    }
    void move()
    {
        if (IsBroken)
            cout << Name << " is broken" << endl;
        else
            cout << Name << " car is diving" << endl;
    }
};

int main()
{
    Car ford("Ford", "red", 7000);
    FlyingCar flyingCar("sky fury", "black", 500000);
    UnderwaterCar underwaterCar("sea storm", "blue", 500000);

    ford.move();
    flyingCar.move();
    underwaterCar.move();

    //  with pointers;
    Car *car1 = &flyingCar;
    Car *car2 = &underwaterCar;

    car1->crashCar();
    car2->crashCar();

    ford.move();
    flyingCar.move();
    underwaterCar.move();
    
    car1->repairCar();
    car2->repairCar();
    
    ford.move();
    flyingCar.move();
    underwaterCar.move();
    

}
