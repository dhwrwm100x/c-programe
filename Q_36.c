#include <stdio.h>

// Function likha bubble sort babe
void bubbleSort(int arr[], int n) {
    int i, j, temp;

    // Nested loop use kori sort koribo
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Swap koribo jodi ulta hoi
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    // Array size lobo
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Element input lobo
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Bubble sort call koribo
    bubbleSort(arr, n);

    // Sorted array display koribo
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
