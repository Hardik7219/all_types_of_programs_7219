#include <stdio.h>
int fib();
void main()
{
  int n, I;
  scanf("%d", &n);
  for (I = 0; I < n; I++)
  {
    printf(" %d", fib(I));
  }
}
int fib(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  else
  {
    return fib(n - 1) + fib(n - 2);
  }
}
