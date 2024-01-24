// C program to show integer
// overflow error signed
// integer
#include <stdio.h>
 
// Driver code
int main()
{
    int x = 4294967295;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    printf("%d", x);
    return 0;
}//Program to read a file
#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("iofnctn.txt","r");
    if(ptr==NULL)
    {
        printf("file unable to open");
    }
    else
    {
        printf("the file content is ");
        while(ch=fgetc(ptr)!=EOF)
        {
            printf("%c",ch);
        }
        fclose(ptr);
        getch();
    }
}