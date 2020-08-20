#include <iostream>
using namespace std;

int main()
{
    //while
    cout << "WHILE:\n";
    int counter = 1;
    while (counter <= 10)
    {
        cout << counter << endl;
        counter++;
    }
    //dowhile
    cout << "DOWHILE:\n";
    int dowhilecount = 10;
    do
    {
        cout << dowhilecount << endl;
        dowhilecount++;

    } while (dowhilecount <= 10);

    //for loop
    string animals[5] = {"cat", "dog", "cow", "goat", "bee"};
    for (int i = 0;i<5; i++){
        cout<< animals[i] <<endl;
    }
}