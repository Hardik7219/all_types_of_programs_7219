#include<stdio.h>
struct std
{
  int roln;
  char name[10];
  int m1, m2, m3;
  };
  void stud() ;
void main() 
{
     struct std st;
   printf("enter roll:") ;
   scanf("%d", &st.roln) ;
   printf("enter name:") ;
   scanf("%s", st.name) ;
   stud(st) ;
   
}
void stud( struct std jl) 
{
   printf("rollno:%d",jl.roln) ;
   printf("name:%s", jl.name) ;
   
}
