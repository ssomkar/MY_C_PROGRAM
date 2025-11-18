#include <stdio.h>
int main() 
{
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks);
    if(marks>=90)
    printf("excellent\n");
     else if(marks>=80)
    printf("good\n");
    else if(marks>=70)
    printf("average\n");
    else if(marks==50)
    printf("just pass\n");
    else
    printf("fail better luck next time\n");
}
