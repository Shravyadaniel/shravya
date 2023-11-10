//program to calculate to simple interest
/*
Here is the program to calculate simple interest per year
and the formula is SI=PTR/100;
*/
#include <stdio.h>
int main()
{
    int principal;
    int time;
    int rate;
    printf("principal is \n");
    scanf("%d",&principal);
    printf("time is \n");
    scanf("%d",&time);
    printf("rate of interest is \n");
    scanf("%d",&rate);
    int simpleinterest= principal*time*rate/100;
    printf("simple interest is %d",simpleinterest);

}