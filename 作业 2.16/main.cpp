#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    int multiply = 0;
    int subtract = 0;
    int divide = 0;

    std::cout << "Enter first integer: ";
    std::cin >> number1;

    std::cout << "Enter second integer: ";
    std::cin >> number2;

    sum = number1 + number2;
    multiply = number1 * number2;
    subtract = number1 - number2;
    divide = number1 / number2;

    std::cout << "Sum is " << sum << std::endl;
    std::cout << "Multiply is " << multiply << std::endl;
    std::cout << "Subtract is " << subtract << std::endl;
    std::cout << "Divide is " << divide << std::endl;
}
