#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    unsigned int n = 0;
    float factorial = 1;

    cout << "n\tn!\n";

    for(unsigned int n = 1;n <= 5;n++)
    {
        factorial *= n;
        cout << "n" << "\t" << factorial << "\n" << endl;
    }

    cout << endl;
}
