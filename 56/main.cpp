#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    unsigned int i = 0;
    int sum;
    double average;

    for(unsigned int i = 0;number != 9999;i++)
    {
        cout << "Enter number: ";
        cin >> number;
        sum += number;
    }

    if(i != 0)
        cout << "The average is " << static_cast< double > (sum) / i << endl;
    else
        cout << "Average does not exist." << endl;
}
