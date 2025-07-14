#include <stdio.h>
int main() {
    int n, sum = 0, digit;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Number khon digit wise sum kora hoise
    while(n != 0) {
        digit = n % 10;   // Last digit loi ase
        sum += digit;     // Add korise
        n /= 10;          // Last digit remove
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
