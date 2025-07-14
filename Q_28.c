#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // String loi ase
    printf("Enter a string: ");
    scanf("%s", str);

    // Length count kore manually
    while(str[i] != '\0') {
        i++;
    }

    printf("Length of string: %d\n", i);
    return 0;
}
