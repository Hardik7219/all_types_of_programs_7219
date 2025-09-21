#include <stdio.h>

void main()
{
    int n, j = 0;
    printf("Enter no:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int l = 0; l < i; l++)
        {
            j++;

            printf(" %d", j);
        }

        printf("\n");
    }
}