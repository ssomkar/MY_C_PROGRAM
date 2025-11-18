#include<stdio.h>
int si(){
    int p,n,r,answer;
    printf("enter amount\n");
    scanf("%d",&p);
    printf("enter years\n");
    scanf("%d",&n);
    printf("enter intrest\n");
    scanf("%d",&r);
    answer=(p*n*r)/100;
    printf("%d\n",answer);
}
int main(){
    si();
}
