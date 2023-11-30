#include <stdio.h>
int main()
{
    int matrix[2][3]={{2,6,4},{8,6,9}};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
            if(j==2)
            printf("\n");
        }
    }
    return 0;
}