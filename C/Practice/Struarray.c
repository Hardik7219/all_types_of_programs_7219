#include <stdio.h>
struct st
{
        int n[100];
        char name[100];

} v;
void main()
{
        int i, n = 5;

        for (i = 0; i < n; i++)
        {
                printf("enter no [%d]:", i);
                scanf("%d", &v.n[i]);
        }
        printf(":%d", v.n[4]);
        // return 0;
}