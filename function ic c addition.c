#include<stdio.h>
int add(int a,int b){
    int c=a+b;
    printf("The addition is:%d\n",c);
    return c;
}
int main(){
    add(5,5);
}
