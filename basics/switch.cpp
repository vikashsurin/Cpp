#include <iostream>
using namespace std;

enum EyeColor
{
    Brown,
    Blue,
    Green,
    Gray,
    Other
};

int main()
{

    EyeColor eyeColor = Brown;
    switch (99)
    {
    case Brown:
        cout << "80% of people has brown eyes.";
        break;
    case Blue:
        cout << "10% of people has brown eyes.";
        break;
    case Gray:
        cout << "20% of people has brown eyes.";
        break;
    case Green:
        cout << "30% of people has brown eyes.";
        break;
    case Other:
        cout << "40% of people has brown eyes.";
        break;

    default:
        cout << "not valid eyeColor.";

        break;
    }
}