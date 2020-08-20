#include <iostream>
using namespace std;

int main()
{
    bool isSunny = true;
    bool isWeekend = true;
    /*
    if (isWeekend && isSunny)
    {
        cout << "Go to the park" << endl;
    }
    else if(isWeekend && !isSunny)
    {
        cout << "GO to park and Take an umbrella" << endl;
    }else{
        cout <<" GO to work\n";
    }
*/
    // isSunny? cout<<" Lets go" :cout<< "no we should stay\n";

    if (isWeekend)
    {
        if (isSunny)
            cout << "Go to the park" << endl;

        else
        {
            cout << "Go to the park , but take an umbrella" << endl;
        }
    }
}