#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< double, 5 > grades;

    int a;

    cout << "Enter an integer: ";
    cin >> a;

    grades[ 4 ] = a;

    cout << "Element" << setw( 13 ) << "Value" << endl;

    cout << setw( 7 ) << 5 << setw( 13 ) << grades[ 4 ] << endl;
}
