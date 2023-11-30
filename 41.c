//C program to sort an array of ten elements in an ascending order 
#include <stdio.h>
int main()
{
    int element[10],i,j,temp;
    printf("enter the array elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&element[i]);
}
for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
    {
        if(element[i]>element[j])
        {
            temp=element[i];
            element[i]=element[j];
            element[j]=temp;
        }
    }
}
printf("the elements in ascending order are \n");
for(i=0;i<10;i++)
{
    printf("%d ",element[i]);
   }
   return 0;
}