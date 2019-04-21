#include <iostream>

int reversecount( int );

using namespace std;

int main()
{
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    cout << "The reverse of the integer is " << reversecount( x ) << endl;
}
int reversecount( int a )
{
    int reverse;

    while( a > 0 )
    {
        reverse *= 10;
        reverse += a % 10;
        a /= 10;
    }
    return reverse;
}
