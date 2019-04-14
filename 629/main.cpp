#include <iostream>

using namespace std;

int prime( int );

int main()
{
    int a;

    cout << "Enter integer: ";
    cin >> a;

    if( prime( a ) )
        cout << a << " is a prime number." << endl;
    else
        cout << a << " is not a prime number." << endl;
}
int prime( int b )
{
    for( int i = 2; i <= b / 2; i++ )
    {
        if( b%2 == 0 )
            return b;
    }

}
