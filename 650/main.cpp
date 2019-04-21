#include <iostream>

int tripleByValue( int );
int tripleByReference( int );

using namespace std;

int main()
{
    int count;

    cout << "Enter a value for count: ";
    cin >> count;

    cout << "\nValue for count before to tripleByValue() is: "
        << count << "\nValue returned from tripleByValue() is: "
        << tripleByValue( count ) << endl;

    cout << "\nValue for count before to tripleByReference() is: "
        << count << endl;
}
int tripleByValue( int value )
{
    return value *= 3;
}
int tripleByReference( int valuereference)
{
    valuereference *= 3;
}
