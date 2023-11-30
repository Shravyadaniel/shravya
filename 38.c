//swaping of two arrays
#include <stdio.h>
int main()
{
    int a[10],b[10],c[10],i;
    printf("enter first array elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the second array elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
        printf("arrays after swaping are\n");
        printf("first array\n");
        for(i=0;i<10;i++)
        {
        printf("%d",b[i]);
        }
        printf("second array\n");
         for(i=0;i<10;i++)
         {
         printf("%d",a[i]);
         }
         return 0;
    }