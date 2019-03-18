#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int Sum = 0;
    int Average = 0;
    int Product = 0;
    int Smallest = 0;
    int Largest = 0;

    cout << "Input three different integers: "; //prompt user for data
    cin >> x >> y >> z;
    Sum = x + y + z;
    cout << " Sum is " << Sum <<  endl;
    Average = ( x + y + z )/3;
    cout << " Average is " << Average << endl;
    Product = x * y * z;
    cout << " Product is " << Product << endl;

    if ( x > z & y > z )
        cout <<" Smallest is" << z << endl;
    if ( y > x & z > x  )
        cout <<" Smallest is" << x << endl;
    if ( z > y& x > y  )
        cout <<" Smallest is " << y << endl;
    if ( x>y & x>z )
        cout <<" Largest is " << x << endl;
    if ( y>x & y>z )
        cout <<" Largest is " << y << endl;
    if ( z > x  & z > y  )
        cout <<" Largest is  " << z << endl;

    return 0;
}  // end function main
