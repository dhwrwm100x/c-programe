#include <stdio.h>
int main() {
    float celsius, fahrenheit;

    // User pora Celsius temperature loi ase
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
