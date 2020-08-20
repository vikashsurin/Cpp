#include <iostream>
using namespace std;

class Car
{
public:
    string Name;
    string Color;
    double Price;

    //CONSTRUCTOR
    //create as many instances
    Car(string name, string color, double price)
    {
        Name = name;
        Color = color;
        Price = price;
    }
    //METHOD ;
    //common functions within many other objects
    void getInfo()
    {
        cout << "Name :" << Name << endl;
        cout << "Color :" << Color << endl;
        cout << "Price :" << Price << endl;
    }
};

int main()
{
    Car myCar("Ford", "red", 7000);
    Car myCar2("Ferrari", "blue", 7000);
    myCar.getInfo();
    myCar2.getInfo();
}