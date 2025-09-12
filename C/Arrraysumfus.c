/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int array();
void main()
{
    
  int sum, i,n, a[n];
  scanf("%d",&n);
  for(i=0; i<=n; i++)
  {
      scanf("%d",&a[i]);
  }
 sum=array(a,n);
 printf("%d",sum);
}
int array(int a[],int n)
{
    int i,sum=0;
    for(i=0; i<=n; i++)
    {
        sum=sum+a[i];
    }
    return sum;
}