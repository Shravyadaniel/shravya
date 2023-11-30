//program to find an average of an array
#include <stdio.h>
int main()
{
int esi[3]={1,2,3};
int sum=0;
int n,avg,i;
for(i=0;i<3;i++)
sum=sum+esi[i];
printf("the sum of elements of an array is %d\n",sum);
n=3;
avg=sum/n;
printf("the average is %d",avg);
return 0;
}