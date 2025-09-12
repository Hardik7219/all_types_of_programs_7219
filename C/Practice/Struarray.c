/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct st
{
        int n[100];
        char name[100];
        
}v;
void main()
{
        int i,n=5;
        
        for(i=0; i<n; i++)
        {
                printf("enter no [%d]:",i);
                scanf("%d",&v.n[i]);   
        }
        printf(":%d",v.n[4]);
    //return 0;
}