#include <iostream>

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= i; k++)
        {

            std::cout << "*";
        }
        for (int j = 0; j < n - i; j++)
        {
            std::cout << " ";
        }
        for (int t = 0; t < n - i; t++)
        {
            std::cout << " ";
        }
        for (int y = 0; y <= i; y++)
        {
            std::cout << "*";
        }

        std::cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <= n - i; k++)
        {

            std::cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            std::cout << " ";
        }
        for (int t = 0; t < i; t++)
        {
            std::cout << " ";
        }
        for (int y = 0; y <= n - i; y++)
        {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}