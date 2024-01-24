//Program to write a file
#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *ptr;
    char ch = 's';
    ptr = fopen("iofnctn.txt", "w");
    if (ptr == NULL)
    {
        printf("file unable to open");
    }
    else
    {
        printf("file opened successfully");
        fputc(ch, ptr);
        fputc('h', ptr);
        fputc('r', ptr);
        fputc('a', ptr);
        fputc('v', ptr);
        fputc('y', ptr);
        fputc('a', ptr);
        fclose(ptr);
        getch();
    }
}