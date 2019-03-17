#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    int average = 0;
    int product = 0;
    int smallest = 0;
    int largest = 0;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    sum = a + b + c;
    average = ( a + b + c ) / 3;
    product = a * b * c;

    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;
    cout << "Product is " << product << endl;

    if ( (a < b)&&(a < c) )
        cout << "Smallest is " << a << endl;
    if ( (b < a)&&(b < c) )
        cout << "Smallest is " << b << endl;
    if ( (c < a)&&(c < b) )
        cout << "Smallest is " << c << endl;

    if ( (a > b)&&(a > c) )
        cout << "Largest is " << a << endl;
    if ( (b > a)&&(b > c) )
        cout << "Largest is " << b << endl;
    if ( (c > a)&&(c > b) )
        cout << "Largest is " << c << endl;

}
