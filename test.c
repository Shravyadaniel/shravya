#include<stdio.h>
int main() {
	int a[10],b[10],c[10],i;
	printf("Enter First array->");
	for (i=0;i<10;i++)
	  scanf("%d",&a[i]);
	printf("\nEnter Second array->");
	for (i=0;i<10;i++)
	            scanf("%d",&b[i]);
	printf("Arrays before swapping");
	printf("\nFirst array->");
	for (i=0;i<10;i++) {
		printf("%d",a[i]);
	}
	printf("\nSecond array->");
	for (i=0;i<10;i++) {
		printf("%d",b[i]);
	}
	for (i=0;i<10;i++) {
		//write any swapping technique
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("\nArrays after swapping");
	printf("\nFirst array->");
	for (i=0;i<10;i++) {
		printf("%d",a[i]);
	}
	printf("\nSecond array->");
	for (i=0;i<10;i++) {
		printf("%d",b[i]);
	}
	return 0;