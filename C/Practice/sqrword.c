#include <stdio.h>
#include <string.h>
void main()
{
    int n, k;
    char msg[10];
    scanf("%d", &n);
    printf("Enter msg:");
    scanf("%s", msg);
    k = 0;
    for (int i = 0; i <= n; i++)
    {

        for (int p = 0; p <= n * 2; p++)
        {
            if (i == 0 || p == (n * 2) || i == n || p == 0)
            {
                printf(" *");
            }
            else if (i == n / 2 && p == (n * 2) / 2 - 2)
            {

                for (int j = 0; j < strlen(msg); j++)
                {
                    printf("%c ", msg[j]);
                    p++;
                }
                printf("  ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}