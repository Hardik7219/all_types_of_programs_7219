#include <stdio.h>
int main()
{
    int n, k = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n + 4; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j <= k; j++)
            {
                if (j == k)
                {
                    printf("*");
                }
                else
                {
                    printf("s");
                }
            }

            for (int y = 0; y <= n - i + 2; y++)
            {
                printf("s");
            }
            for (int p = 0; p <= k; p++)
            {
                printf("%d ", p + 1);
            }
            printf("\n");
            k++;
        }
    }
    return 0;
}
