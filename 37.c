#include<stdio.h>
int main()
{
    char name[8]= {'s','h','r','a','v','y','a','\0'};
    int i=0;
    while(name[i])
    {
    printf("%c",name[i++]);
    }
    return 0;
}