//program to print multiples of 10-method 2
//using while loop
#include <stdio.h>
int main()
{
    int i=1;
    int x,y;
    printf("enter the nummer: ");
    scanf("%d",&x);
    while(i<=x)
    {
        y=i*10;
        printf("%d ",y);
        i++;//can use i++ or i+1
    }
    return 0;
}