#include <iostream>
int main()
{
    int n1, n2;
    char op;
    std::cout << "Enter an mathmatical expression with two numbers (eg: 2+3): ";
    std::cin >> n1 >> op >> n2;
    if (op == '+')
        std::cout << n1 + n2 << std::endl;
    else if (op == '-')
        std::cout << n1 - n2 << std::endl;
    else if (op == '*')
        std::cout << n1 * n2 << std::endl;
    else if (op == '/')
        std::cout << n1 / n2 << std::endl;

    return 0;
}