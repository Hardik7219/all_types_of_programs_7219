#include<stdio.h>

void main()
{    int n;
     printf("Enter no:");
     scanf("%d",&n);   
        for(int i=0; i<=n; i++)
        {            
            for(int l=0; l<=n; l++)
            {
                if( l==i || l==n-i )
                {
                printf("*");
                }               
                else
                {
                printf(" ");
                }
            }
            printf("\n");
        }
}