#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        for (int y = 0; y < i; y++)
        {
            printf("%c", y + 65);
        }

        for (int k = i; k >= 0; k--)
        {
            printf("%c", k + 65);
        }

        printf("\n");
    }
    return 0;
}