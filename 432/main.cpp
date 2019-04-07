#include <iostream>

using namespace std;

int main()
{
    double a = 0,b = 0,c = 0;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if((a + b > c)||(a + c > b)||(b + c > a))
        cout << "These three numbers can represent three sides of a triangle." << endl;
    else
        cout << "These three numbers cannot represent three sides of a triangle." << endl;
}
