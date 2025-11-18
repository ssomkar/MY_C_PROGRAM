#include <stdio.h>
int main() {
    int a = 5, b, c;
    b = ++a; 
    a = 5;
    c = a++; 
    printf("Pre-increment example:\n");
    printf("a = 6, b = %d\n", b);
    printf("\nPost-increment example:\n");
    printf("a = %d, c = %d\n", a, c);
    return 0;
}
