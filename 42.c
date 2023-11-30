//program to sort an array of elements in descending order
#include <stdio.h>
int main()
{
    int elements[7],temp,i,j;
    printf("enter the array elements \n");
    for(i=0;i<7;i++)
    {
    scanf("%d",&elements[i]);
    }
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(elements[i]<elements[j])
            {
                temp=elements[i];
                elements[i]=elements[j];
                elements[j]=temp;
            }
        }
    }
    printf("the elements in descending order are\n");
    for(i=0;i<7;i++)
    {
        printf("%d ",elements[i]);
    }
    return 0;

}