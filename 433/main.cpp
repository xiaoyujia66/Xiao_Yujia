#include <iostream>

using namespace std;

int main()
{
    double a = 0,b = 0,c = 0;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if((a*a + b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c == a*a))
        cout << "These three numbers can represent three sides of a right triangle." << endl;
    else
        cout << "These three numbers cannot represent three sides of a right triangle." << endl;
}
