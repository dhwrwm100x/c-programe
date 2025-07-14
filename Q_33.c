#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if(n == 0) // Base case: 0th term = 0
        return 0;
    else if(n == 1) // Base case: 1st term = 1
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2); // Recursive sum of previous two
}

int main() {
    int n;

    // User pora position loi ase
    printf("Enter the position (n): ");
    scanf("%d", &n);

    printf("Fibonacci term at position %d = %d\n", n, fibonacci(n));

    return 0;
}
