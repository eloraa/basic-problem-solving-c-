#include <iostream>
int main()
{
    long long int n1 = 0, n2 = 1, n3, number;
    std::cout << "Enter the number of elements: ";
    std::cin >> number;

    if (number == 1)
    {
        std::cout << n1 << std::endl;
        return 0;
    }
    else if (number >= 2)
    {
        std::cout << n1 << " " << n2 << " ";
        for (int i = 2; i < number; i++)
        {
            n3 = n1 + n2;
            std::cout << n3 << " ";
            n1 = n2;
            n2 = n3;

            if (i == number - 1)
            {
                std::cout << std::endl;
            }
        }
    }

    return 0;
}