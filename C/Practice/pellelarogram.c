#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    for( int i=0; i<=n; i++)
    {
         for(int k=0; k<n-i; k++)
        {
         printf(" ");
         }
       for(int p=0; p<=n; p++)
       {
       if(i==0 || p==n || i==n || p==0)
       {
       printf("*");
       }
       else
       {
       printf(" ");
        }
        }
       /*for(int l=0; l<=i; l++)
       {
       if(i==0 || l==n || i==n || l==0)
       {
       printf(" ");
       }
       else
       {
       printf(" ");
        }*/
        
       
        printf("\n");
        
    }
  
}