//Program to print a matrix
#include <stdio.h>
int main()
{
    int arr[3][3],i,j;
    printf("enter the array elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
     printf("the matrix is\n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
            if(j==2)
            printf("\n");
        }
     }
    return 0;
}