#include<stdio.h>
int main(){
    int num=10;
    int*p;
    p=&num;
    printf("volume of num=%d\n",num);
    printf("addition of num=%p\n",&num);
    printf("pointer p stores=%p\n",p);
    printf("value using pointers=%d\n",*p);
    
}
