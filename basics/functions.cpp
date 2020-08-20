#include <iostream>
using namespace std;

float sum(float a, float b);            //return type float
void introduceMe(string name, int age=0); //return type void

int main()
{
    cout << sum(23.3, 44.4) << endl;
    introduceMe("vkash",23);
}

float sum(float a, float b)
{
    return a + b;
}

void introduceMe(string name, int age)
{
    cout << "My name is  " << name << endl;
    cout << "I am " << age << " years old" << endl;
}