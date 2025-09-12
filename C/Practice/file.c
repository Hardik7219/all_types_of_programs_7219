#include<stdio.h>

#define path = "/sdcard/Documents/C/Arrraysumfus.txt"
int main() 
{
     FILE file;
     file = fopen( "/sdcard/Documents/C/Arrraysumfus.txt","r")
     while(file.read())
     {
     printf(file.read());
     }
     return 0;
}
    