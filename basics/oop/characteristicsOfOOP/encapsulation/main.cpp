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

int main()
{
    Car ford("Ford", "red", 7000);
    Car ferrari("Ferrari", "blue", 7000);
    ford.move();
    ford.crashCar();
    ford.move();
    ford.repairCar();
    ford.move();
}