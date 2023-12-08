//program to print a table
#include <stdio.h>
int main()
{
    int num,i=1;
    printf("enter the number: ");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("%d x %d = %d \n",num,i,i*num);
        i++;
    }
    return 0;
}