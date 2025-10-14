#include <iostream>

int main()
{
    int n;
    std::cout << "enter n:";
    std::cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int p = n; p > i; p--)
        {
            std::cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i == n)
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