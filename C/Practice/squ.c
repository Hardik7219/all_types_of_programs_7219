#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {

        for (int p = 0; p <= n; p++)
        {
            if (i == 0 || p == n || i == n || p == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}