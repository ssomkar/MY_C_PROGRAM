#include<stdio.h>
enum numbers{
  A=5,
  B,
  C=10,
  D
};
int main(){
    enum numbers a;
    a=B;
    printf("%d",a);
    
}
