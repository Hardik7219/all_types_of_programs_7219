#include <iostream>

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {

        for (int t = 0; t < n - i; t++)
        {
            std::cout << " ";
        }
        for (int p = 0; p <= i; p++)
        {
            if (p == i || p == 0)
            {
                std::cout << " *";
            }
            else
            {
                std::cout << "  ";
            }
        }

        std::cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= i; k++)
        {
            std::cout << " ";
        }
        for (int p = 0; p <= n - i; p++)
        {
            if (i == n || p == 0 || p == n - i)
            {
                std::cout << " *";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}