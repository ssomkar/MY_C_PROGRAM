#include<stdio.h>
int main()
{
int rose[5];
int sum=0;
printf("enter the element");
for(int i=0;i<5;i++){
    printf("enter elements\n");
    scanf("%d",&rose[i]);
    sum=sum+rose[i];
}
printf("sum of the element is:%d ",sum);
}
