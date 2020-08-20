#include <iostream>
using namespace std;

void celebrateBirthday(int* age);

int main()
{
    int myAge = 23;
    cout << "before function " << myAge << endl;
    celebrateBirthday(&myAge);
    cout << "after function " << myAge << endl;
}
void celebrateBirthday(int* age)
{
    (*age)++;
    cout << "Yeee, celebrated " << *age << " .Birthday" << endl;
}