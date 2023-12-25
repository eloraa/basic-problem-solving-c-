#include <iostream>
int main()
{
    int a = 1, b = 2;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    std::cout << "Swapped values are: a: " << a << " b: " << b << std::endl;

    return 0;
}