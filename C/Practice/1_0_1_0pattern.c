#include<stdio.h>
void main()
{
    int n,l=0;
    scanf("%d",&n);
    for( int i=1; i<=n; i++)
    {    
        for(int j=1; j<=i; j++)
        { 
            if(l%2==0)
            {
            printf(" 1");
            }
            else
            {
            printf(" 0");
            }
            l++;
        }
        
        printf("\n");
     }
     }   