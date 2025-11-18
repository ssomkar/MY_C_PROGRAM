#include <stdio.h>

int main() {
    float num1, num2;     // Using float to allow decimal input
    float sum, diff, prod, quot;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Check division by zero
    if (num2 != 0) {
        quot = num1 / num2;
        printf("\nQuotient = %.2f\n", quot);
    } else {
        printf("\nCannot divide by zero.\n");
    }

    // Display results
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", prod);

    return 0;
}
