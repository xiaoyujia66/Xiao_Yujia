#include <iostream>

using namespace std;

int iseven( int );

int main()
{
    int number;

    for( int i = 1; i <= 10; i++ )
    {
        cout << "Enter integer: ";
        cin >> number;

        if( iseven( number ) )
            cout << number << " is an even integer." << endl;
        else
            cout << number << " is an odd integer." << endl;
    }
}
int iseven( int a )
{
    return !( a%2 );
}
