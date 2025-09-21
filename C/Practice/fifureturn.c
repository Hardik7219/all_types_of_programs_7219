#include <stdio.h>
int fi();
void main()
{
   int n, a = 0, b = 1, x;
   printf("Enter no:");
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      x = fi(n, a, b);
      a = b;
      b = x;
      printf(" %d", x);
   }
}
int fi(int n, int a, int b)
{
   int i, C = 0;
   for (i = 0; i < n; i++)
   {
      C = a + b;
      return C;
   }
}