#include <iostream>
int main()
{
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << a << " is greater than " << b << std::endl;
    }
    else
    {
        std::cout << b << " is greater than " << a << std::endl;
    }

    return 0;
}