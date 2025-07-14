#include <stdio.h>
int main() {
    int a, b, i, gcd, lcm;

    // User pora dui ta number loi ase
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // GCD: juntu dui number e divide kore, boro divisor
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    // LCM: formula => (a * b) / gcd
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
