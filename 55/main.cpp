#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int number = 0;
    int n = 0;
    int i = 1;

    cout << "Enter n: ";
    cin >> n;

    for(unsigned int i = 1;i <= n;++i)
    {
        cout << "Enter number: ";
        cin >> number;
        sum += number;
    }
    cout << "Sum is " << sum << endl;
}
