 #include<stdio.h>
    int main(){
        int num=131,original,rev=0,rem;
      while(num!=0){
          rem=num%10;
          rev=rev*10+rem;
          num=num/10;
      }
      if(original==rev){
          printf("palindrome",num);
      }
      else{
          printf("not a palindrome",num);
      }
    }
