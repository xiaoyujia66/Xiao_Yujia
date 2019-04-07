#include <iostream>

using namespace std;

int main()
{
    double r = 0,d = 0,c = 0,s = 0;

    cout << "Enter integer: ";
    cin >> r;

    d = 2 * r;
    c = 2 * 3.14159 * r;
    s = 3.14159 * r * r;

    cout << "d = " << d << endl;
    cout << "c = " << c << endl;
    cout << "s = " << s << endl;
}
