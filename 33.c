//Program to print sum of elememts in an array(using runtime values)
#include <stdio.h>
int main()
{
    int add[10],sum,i;
    sum=0;
    printf("enter the values\n");
    for(i=0;i<10;i++)
    scanf("%d",&add[i]);
    for(i=0;i<10;i++)
    sum+=add[i];
    printf("the sum of elememts is %d",sum);
    return 0;
}