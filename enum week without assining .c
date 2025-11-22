#include<stdio.h>
enum week{
    monday,
    tuesday,
    wednesday,
    thuresday,
    friday,
    saturday,
    sunday,
};
int main(){
    enum week today;
    today=wednesday;
    printf("value of wednesday=%d\n",today);
}
