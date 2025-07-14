#include <stdio.h>

// Recursive function to find factorial
int factorial(int n) {
    if(n == 0 || n == 1) // Base case: 0! or 1! = 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int n;

    // User pora number loi ase
    printf("Enter a number: ");
    scanf("%d", &n);

    // Factorial call kori result print kore
    printf("Factorial of %d = %d\n", n, factorial(n));

    return 0;
}
