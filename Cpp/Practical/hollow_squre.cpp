#include <iostream>

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n; k++)
        {
            if (k == 0 || i == n || i == 0 || k == n)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }

        std::cout << "\n";
    }
    return 0;
}