#include <iostream>

using namespace std;

int main()
{
    int r = 0;
    int d = 0;
    int c = 0;
    int s = 0;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    d = 2 * r;
    c = 2 * 3.14159 * r;
    s = 3.1419 * r * r;

    std::cout << "d is " << d << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "s is " << s << std::endl;
}
