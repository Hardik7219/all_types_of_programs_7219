// Write a user defined function using pointers to find simple interest.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int I = 0, j, c = 0;
    char a[10], b[10];
    scanf("%s", &a);
    scanf("%s", &b);
    while (a[I] != '\0')
    {

        c++;
        I++;
    }
    c++;
    while (b[I] != '\0')
    {
        a[c] = b[I];
        c++;
        I++;
    }
    puts(a);

    return 0;
}
