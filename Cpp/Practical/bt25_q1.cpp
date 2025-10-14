#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int I = 1; I <= n; I++)
    {
        if (I % 2 == 1)
        {
            for (int p = 0; p <= n - I; p++)
            {
                printf(" ");
            }

            // if(I%2==1)

            for (int j = 1; j <= I; j++)
            {

                printf(" %d", j);
            }

            printf("\n");
        }
    }

    for (int I = 1; I <= n; I++)
    {
        if (I % 2 == 0)
        {
            for (int p = 0; p <= I; p++)
            {
                printf(" ");
            }

            // if(I%2==0)

            for (int j = 1; j <= n - I; j++)
            {

                printf(" %d", j);
            }

            printf("\n");
        }
    }
}