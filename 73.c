//program to find sum of first 10 natural numbers using do while loop
#include <stdio.h>
int main()
{
    int i=0,sum=0;
    do
    {
      sum=sum+i;  
      i++;
    }
    while (i<=10);
    printf("the sum is %d",sum);
    return 0;
    
}