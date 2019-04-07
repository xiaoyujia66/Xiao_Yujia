#include <iostream>

using namespace std;

int main()
{
    double e = 1;
    double ex = 1;
    int accuracy;
    int x;
    float factorial = 1;
    int n = 1;

    cout << "Enter ex: ";
    cin >> x;

    cout << "Enter accuracy: ";
    cin >> accuracy;

    while(n < accuracy)
    {
        ex *= x;
        factorial *= n;
        e += ex;
        n++;
    }
    cout << "ex = " << e << endl;
}
