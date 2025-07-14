#include <stdio.h>
int main() {
    int n, i, fact = 1;

    printf("Enter a number: ");// user or poira ata no. lole
    scanf("%d", &n);

    // for loop use kori factorial calculate kora hoise
    for(i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d = %d", n, fact);
    return 0;
}
