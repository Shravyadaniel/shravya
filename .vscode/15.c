#include<stdio.h>
int main()
{
    int first,second,temp;
    printf("enter the first number:");
    scanf("%d",&first);
    printf("enter the second number:");
    scanf("%d",&second);
    temp=first;
    first=second;
    second=temp;
    printf("after swaping first number is %d\n",first);
    printf("after swaping second number is %d",second);
    return 0;
}