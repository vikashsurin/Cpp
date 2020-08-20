#include <iostream>
using namespace std;

class Car
{
public:
    string Name;
    string Color;
    double Price;
};

int main()
{
    Car myCar;
    myCar.Name = "Ford";
    myCar.Color = "Red";
    myCar.Price = 50000;

    cout << "Name :" << myCar.Name << endl;
    cout << "Color :" << myCar.Color << endl;
    cout << "Price :" << myCar.Price << endl;

    
    Car myCar2;
    myCar.Name = "Ford";
    myCar.Color = "Red";
    myCar.Price = 50000;
    
    cout << "Name :" << myCar.Name << endl;
    cout << "Color :" << myCar.Color << endl;
    cout << "Price :" << myCar.Price << endl;

    
}