#include <stdio.h>
int main() 
{
    int n1,n2,n3;
    printf("enter the number:");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2){
        if (n1>n3){
    printf("the largest number is %d\n",n1);
     }else{
    printf("the largest number is %d\n",n3);
     }
     }else{
      if(n1>n3){   
      printf("the largest number is %d\n",n2);
      }else{
       printf("the largest number is %d\n",n3);    
      }
     }
}
