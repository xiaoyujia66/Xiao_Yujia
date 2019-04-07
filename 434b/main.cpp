#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double e = 1;
    int accuracy;
    int n = 1;
    float factorial = 1;

    cout << "Enter accuracy: ";
    cin >> accuracy;

    while(n < accuracy)
    {
        factorial *= n;
        e += 1 / factorial;
        n++;
    }

    cout << "e = " << e << endl;
}
