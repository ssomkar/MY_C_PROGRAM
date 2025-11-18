#include <stdio.h>
int main() 
{
    int n,sum=0,i=1;
    printf("Enter the positive integer:");
    scanf("%d",&n);
    while (i<=n){
        sum+=i;
        i++;
    }
    printf("sum of first %d natural number :%d\n",n,sum);
}
