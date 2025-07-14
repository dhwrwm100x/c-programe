#include <stdio.h>
int main() {
    int n, i;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // 1 pora 10 logot multiply kori print kore
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
