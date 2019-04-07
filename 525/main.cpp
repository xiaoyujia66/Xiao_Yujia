#include <iostream>

using namespace std;

int main()
{
    unsigned int count;

    bool breakout = false;

    for(count = 1;(count <= 10)&&(!breakout);count++)
    {
        if(count == 5)
            breakout = true;
        else
            cout << count << " ";
    }
    cout << "\nBroke out of loop failed." << endl;
}
