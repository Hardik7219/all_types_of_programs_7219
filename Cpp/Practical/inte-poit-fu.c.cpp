// Write a user defined function using pointers to find simple interest.
#include <stdio.h>
#include <conio.h>
float f(int *p, int *n, float *r);

int main()
{
    int p, n, *a, *b;
    float r, *c, ans;
    scanf("%d", &p);
    scanf("%d", &n);
    scanf("%f", &r);
    a = &p;
    b = &n;
    c = &r;
    ans = f(a, b, c);
    printf("\nans:%.2f", ans);
    return 0;
}
float f(int *n, int *p, float *r)
{
    float ans = 0;
    ans = *n * *p * *r / 100;
    return ans;
}