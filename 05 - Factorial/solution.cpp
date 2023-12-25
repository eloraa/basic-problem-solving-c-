#include <iostream>
int main()
{

    long long fact = 1, n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n != 1 && n != 0)
    {
        fact = n;
        for (int i = n - 1; i >= 1; i--)
        {
            fact *= i;
        }
    }
    std::cout << "Factorial of " << n << " is: " << fact << std::endl;
    return 0;
}