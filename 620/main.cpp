#include <iostream>

using namespace std;

int multiple( int, int );

int main()
{
    int a;
    int b;

    for( int i = 1; i <= 10; i++ )
    {
        cout << "Enter two integers: ";
        cin >> a >> b;

        if( multiple( a, b ) )
            cout << b << " is a multiple of " << a << endl;
        else
            cout << b << " is not a multiple of " << a << endl;
    }
}
int multiple( int a, int b )
{
    return !( b%a );
}
