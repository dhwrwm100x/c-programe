#include <stdio.h>
int main() {
    int n, rev = 0, rem;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Number khon reverse kora hoise digit wise
    while(n != 0) {
        rem = n % 10;         // Last digit loise
        rev = rev * 10 + rem; // Reverse build kori ase
        n /= 10;              // Last digit remove kora hoise
    }

    printf("Reversed number: %d\n", rev);
    return 0;
}
