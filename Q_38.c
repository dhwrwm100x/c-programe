#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int age;

    // File open korilu write mode (new file create hobo)
    fptr = fopen("student.txt", "w");

    // File open successfully check
    if (fptr == NULL) {
        printf("File open koribo nuwarilu.\n");
        return 1;
    }

    // User para data lobo
    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    // File to write koribo
    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    fclose(fptr);  // File close korilu

    // File open korilu read mode
    fptr = fopen("student.txt", "r");

    // Read data print koribo
    printf("\n--- File Contents ---\n");
    char ch;
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
    return 0;
}
