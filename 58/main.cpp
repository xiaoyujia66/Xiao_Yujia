#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int smallest;
    unsigned int i = 1;
    unsigned int n = 0;

    cout << "Enter n: ";
    cin >> n;

    for(unsigned int i = 1;i <= n;i++)
    {
        cout << "Enter number: ";
        cin >> number;

        if(smallest >= number)
            smallest = number;
    }
    cout << "The smallest is " << smallest << endl;
}
