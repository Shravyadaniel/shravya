#include <stdio.h>
int main()
{
    int i,j,m,n;
    int matrix[10][20];
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of coloumns: ");
    scanf("%d",&n);
    //input data in matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter data in [%d][%d] :",i,j);
            scanf("%d",&matrix[i][j]);
        }

    }
    //display the matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
printf("%d\t",matrix[i][j]);
if(j==2)
printf("\n");
        }
    }
    return 0;
}