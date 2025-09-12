#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() 
{
  int *p,  n=5;
  p=(int*) malloc(n*sizeof(int)) ;
  
  if(p==NULL) 
  {
  printf("e") ;
  }
  else{
 for(int I=0; I<n; I++) 
  {
     scanf("%d", p+I) ;
  }
  }
  for(int I=0; I<n; I++) 
  {
  printf("%d",*(p+I)); 
  }
  
  free(p) ;
}