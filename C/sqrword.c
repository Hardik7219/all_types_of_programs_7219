#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    for( int i=0; i<=n; i++)
    {
         /*for(int k=0; k<n-i; k++)
         {
         printf(" ");
         }*/
       for(int p=0; p<=n*2; p++)
       {
       if(i==0 || p==(n*2) || i==n || p==0)
       {
       printf("*");
       }
       else if(i==n/2 && p==n/2) 
       {
       printf(" hello") ;
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
       else       {
       printf(" ");
        }*/
        
       
        printf("\n");
        
    }
  
}