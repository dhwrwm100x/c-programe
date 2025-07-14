#include <stdio.h>
int main() {
    int n, count = 0;

    // User pora number loi ase
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Digit count kora: number khon 10 e divide kori
    do {
        n /= 10;
        count++;
    } while(n != 0);

    printf("Total digits = %d\n", count);
    return 0;
}
