//program to store array elements
#include  <stdio.h>
int main()
{
    int arr[10000];
    int i,s;
    printf("enter the size of an array:\n");
    scanf("%d",&s);
    printf("enter the elements:\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++)
    printf("%d ",arr[i]);
    return 0;
}