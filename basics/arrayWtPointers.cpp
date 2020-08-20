#include <iostream>
using namespace std;

int main()
{
    int luckyNumbers[5] = {1, 2, 3, 4, 5};
    cout << luckyNumbers << endl;
    cout << &luckyNumbers[0] << endl;
    cout << luckyNumbers[0] << endl;

    int *luckyPointer = luckyNumbers;
    cout << "Pointing to " << luckyPointer << " , Value : " << *luckyPointer << endl;

    luckyPointer++;
    cout << "Pointing to " << luckyPointer << " , Value : " << *luckyPointer << endl;
}