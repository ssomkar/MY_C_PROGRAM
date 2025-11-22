#include<stdio.h>
int main(){
    union rajesh{
        int age;
        float marks;
    };
    union rajesh r;
    r.age=10;
    printf("%d\n",r.age);
    r.marks=10.7;
    printf("%f\n",r.marks);
    printf("%d\n",r.age);
}
