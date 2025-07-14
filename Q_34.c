#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer arr array pointing kore

    printf("Pointer arithmetic result:\n");

    for (int i = 0; i < 5; i++) {
        // ptr+i manei next elementor address
        printf("Value at *(ptr + %d) = %d\n", i, *(ptr + i));
    }

    return 0;
}
