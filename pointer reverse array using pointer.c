#include <stdio.h>
int main() {
    int arr[100], n=3;
    int *start,*end,temp;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("Reversed array:\n");
    for (int i = 0; i <n; i++) {
        printf("%d ", arr[i]);
    }
}

