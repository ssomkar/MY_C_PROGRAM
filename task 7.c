#include <stdio.h>
int main() {
    int marks;
    printf("Enter the student's marks: ");
    scanf("%d", &marks);
    if (marks >= 40) {
        printf("The student has PASSED.\n");
    } else {
        printf("The student has FAILED.\n");
    }
    return 0;
}
