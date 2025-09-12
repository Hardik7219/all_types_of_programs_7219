#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,*ptr,**p2;
    ptr=&a;
    p2=&ptr;
    printf("\nAdd of A:%u",&a);
    printf("\nval of pttr:%u",ptr);
    printf("\nA:%d",*ptr);
    printf("\nadd of ptr:%u",&ptr);
    printf("\nv of p2:%u",p2);
    printf("\nvali of a:%d",**p2);
    return 0;
}