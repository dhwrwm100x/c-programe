#include <stdio.h>
int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    // User pora n terms loi ase
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Fibonacci series print kore: 0 1 1 2 3 5 ...
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2; // Next term calculate
        t1 = t2;            // First term update
        t2 = nextTerm;      // Second term update
    }

    return 0;
}
