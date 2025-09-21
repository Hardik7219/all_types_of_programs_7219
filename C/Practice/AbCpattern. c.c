#include <stdio.h>
int main()
{
    int n, l = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (l % 2 == 0)
            {
                printf(" %c", l + 65);
            }
            else
            {
                printf(" %c", l + 97);
            }
            l++;
        }

        printf("\n");
    }
    return 0;
}