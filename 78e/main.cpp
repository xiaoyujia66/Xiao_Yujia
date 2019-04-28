#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< double, 11 > a;
    array< double, 34 > b;

    cout << "a before modification: ";
    for ( int b : a )
        cout << b << " ";

    cout << "\na after modification: ";
    for ( int b : a )
        cout << b << " ";

    cout << endl;
}
