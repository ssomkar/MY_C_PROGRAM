#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("\nInitial values (calloc initializes to 0):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nEnter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nYou entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

}
