#include <stdio.h>
int main() {
    int n, i, isPrime = 1;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Prime number check: 1 or kom hoile prime nohoi
    if (n <= 1) isPrime = 0;

    // 2 pora sqrt(n) porjonto divide kora jai ne check kore
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrime = 0; // Divisible hoise mane prime nohoi
            break;
        }
    }

    if (isPrime)
        printf("%d is a Prime Number\n", n);
    else
        printf("%d is not a Prime Number\n", n);

    return 0;
}
