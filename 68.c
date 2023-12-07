//usage of logical operators in while loop
#include <stdio.h>
int main()
{
    int i=1,j=1;
    while(i<=7 && j<=3)//logical AND
    {
        printf("%d %d \n",i,j);
        i++;
        j++;
    }
    return 0;
}