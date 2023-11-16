//program tor print array in reverase order 
#include <stdio.h>
int main()
{
    int num[7]={1,2,3,4,5,6,7},i;
    printf("the numbers in reverse order are \n");
    for(i=6;i>=0;i--)
    printf("%d\n",num[i]);
    return 0;
}