#include <stdio.h>

int main()
{
    int n;
    printf("Enter no:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int l = 0; l <= i; l++)
        {
            if (l == 0 || l == i || i == n - 1)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}