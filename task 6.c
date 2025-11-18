#include <stdio.h>
int main() {
    int a, b;
printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    }
    if (a > 0 || b > 0) {
        printf("At least one number is positive.\n");
    }
    if (!(a > 0)) {
        printf("a is not positive.\n");
    }
    return 0;
}
