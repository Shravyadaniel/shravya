//program to find the largest among two using ternary operator
#include <stdio.h>
int main()
{
    int x,y;
    printf("enter the numbers: \n");
    scanf("%d %d",&x,&y);
    (x>y)?(printf("%d is the largest number",x)):(printf("%d is the largest number",y));
    return 0;
    
}