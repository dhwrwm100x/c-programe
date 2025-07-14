#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

    // File 1 and 2 open korilu read mode
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    // File 3 create korilu write mode
    file3 = fopen("merged.txt", "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("File open error.\n");
        return 1;
    }

    // File 1 contents copy to file 3
    while ((ch = fgetc(file1)) != EOF)
        fputc(ch, file3);

    // File 2 contents copy to file 3
    while ((ch = fgetc(file2)) != EOF)
        fputc(ch, file3);

    // All file close korilu
    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("Files merged successfully into 'merged.txt'.\n");

    return 0;
}
