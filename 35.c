#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int largest,i;
    largest=arr[0];//declared first element as the largest number
    for(i=0;i<10;i++)
    if (largest<arr[i])
    largest=arr[i];
    printf("the largest number is %d",largest);
    return 0;
}