#include<stdio.h>
int main(){
    int m1,m2,m3;
    float avg;
    printf("enter three subject marks\n");
    scanf("%d %d %d",&m1,&m2,&m3);
    avg=(m1+m2+m3)/3;
    printf("average=%.2f\n",avg);
    if(m1>=40 && m2>=40 && m3>=40)
    printf("pass\n");
    else
    printf("fail\n");
    
    
}
