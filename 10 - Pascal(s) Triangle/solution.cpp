#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            std::cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        std::cout << std::endl;
    }

    return 0;
}