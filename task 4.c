#include <stdio.h>

int main() {
    int num1, num2;

    // Input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check which number is larger
    if (num1 > num2) {
        printf("%d is the largest number.\n", num1);
    } else {
        printf("%d is the largest number.\n", num2);
    }

    return 0;
}
