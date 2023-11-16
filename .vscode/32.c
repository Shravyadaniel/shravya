//Program to print sum of elememts in an array
#include <stdio.h>
int main()
{
    int add[10]={1,2,3,4,5,6,7,8,9,0},sum,i;
    sum=0;
    for(i=0;i<10;i++)
    sum=sum+add[i];
    printf("the sum of elememts is%d",sum);
    return 0;
}