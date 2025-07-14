#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    // First string loi ase
    printf("Enter a string: ");
    scanf("%s", str1); // %s e whitespace pora thakile thik kaam kore

    // String copy manually
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }

    str2[i] = '\0'; // Null character set kora lagibo

    printf("Copied string: %s\n", str2);
    return 0;
}
