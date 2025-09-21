#include <stdio.h>
int array();
int main()
{

    int sum, i, n, a[n];
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = array(a, n);
    printf("sum:=%d", sum);
    return 0;
}
int array(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}