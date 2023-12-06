//students grades based on marks
#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks: ");
    scanf("%d",&marks);
    if (marks>=35){
        if(marks>=90){
            printf("A");
        }
        else if(marks>=80){
            printf("B");
        }
        else if(marks>=65){
            printf("C");
        }
        else if(marks>=55){
            printf("D");
        }
        else{
            printf("E");
        }
    }
else{
    printf("FAIL");
}
return 0;
}