//program to check if given three numbers are equal
#include <stdio.h>
int main()
{
    int p,q,r;
    printf("enter the numbers:\n");
    scanf("%d %d %d",&p,&q,&r);
    if(p==q)
    {
        if(p==r)
        {
            printf("yes,all are equal");
        }
        else{
            printf("no,they are not equal");
        }
    }
    else
    {
        printf("no,they are not equal");
    }
    return 0;
}