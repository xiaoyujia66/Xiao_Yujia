#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    cout << "Enter one integer: ";
    cin >> a;

    if ( a % 2 == 0 )
        cout << "It's even." << endl;

    if ( a % 2 != 0 )
        cout << "It's odd." << endl;
}
