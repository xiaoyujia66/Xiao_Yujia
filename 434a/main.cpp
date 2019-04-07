#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n = 0;
    int i = 1;
    float factorial = 1;

    cout << "Enter n: ";
    cin >> n;

    while((n == 0)||(n == 1))
        factorial = 1;
    while((i <= n))
        factorial *= i++;

    cout << "Factorial is  " << factorial << endl;
}
