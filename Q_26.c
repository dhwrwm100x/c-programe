
#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    // Array size loi ase
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Array elements loi ase
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Search element loi ase
    printf("Enter element to search: ");
    scanf("%d", &search);

    // Linear search kore array element logot
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element not found.\n");

    return 0;
}
