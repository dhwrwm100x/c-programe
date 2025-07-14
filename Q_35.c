#include <stdio.h>

// Function likha swap koribo pointer use kori
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // User para value lobo
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);  // Address pass korilu

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
