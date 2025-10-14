
#include <stdio.h>
#include <conio.h>
struct st
{
    int no, m[3]; // array with strcture
    char name[10];
} s1[10]; // array of structure

void ptr(struct st s2[], int n);
int main()
{
    int n;
    printf("Enter no of student");
    scanf("%d", &n);

    ptr(s1, n); // funtion call with structure variable and NO

    return 0;
}
void ptr(struct st s2[], int n)
{
    for (int i = 0; i < n; i++) // get data
    {
        printf("Student name:");
        scanf("%s", s2[i].name);
        printf("student no:");
        scanf("%d", &s2[i].no);
        for (int j = 0; j < 3; j++) // get marks for individual student
        {
            printf("student marks:");
            scanf("%d", &s2[i].m[j]);
        }
    }

    for (int i = 0; i < n; i++) // printf data
    {
        printf("\nStudent name:%s", s2[i].name);
        printf("\nstudent no:%d", s2[i].no);
        for (int j = 0; j < 3; j++)
        {
            printf("\nstudent marks:%d", s2[i].m[j]);
        }
    }
}
