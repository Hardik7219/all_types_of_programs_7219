/*Write a C program to read student information like roll number, name and marks of 3 
subjects using structure. Pass structure as an argument to user defined function and print 
the data in UDF.*/
#include<stdio.h>
#include<conio.h>
struct st{
int no;
char name[10];
int m[3];
}s1[2];
void f(struct st s1[] );
int main()
{
         for(int i=0; i<2; i++)
         {
             printf("rol:");
             scanf("%d",&s1[i].no);
             printf("namew:");
             scanf("%s",s1[i].name);
             for(int j=0; j<2; j++)
             {
                 printf("neter marks:");
                 scanf("%d",&s1[i].m[j]);
             }
         }       
         f(s1);
}
void f(struct st s1[])
{
 for(int i=0; i<2; i++)
 {
 printf("\n===>%d",i+1);
     printf("\nro:%d",s1[i].no);
     printf("\nname:%s",s1[i].name);
     for(int j=0; j<2; j++)
     {
         printf("\n%d",s1[i].m[j]);
     }
 }   
}
    