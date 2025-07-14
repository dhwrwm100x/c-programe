#include <stdio.h>
#include <stdlib.h>  // malloc aru free babe

int main() {
    int *ptr, n, i;

    // User para size lobo
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Malloc use kori memory allocate korilu
    ptr = (int*) malloc(n * sizeof(int));

    // Memory allocate success check koribo
    if (ptr == NULL) {
        printf("Memory allocate koribo nuwarilu.\n");
        return 1;
    }

    // Element input lobo
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Elements display koribo
    printf("Entered elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    // Memory free koribo
    free(ptr);

    return 0;
}
