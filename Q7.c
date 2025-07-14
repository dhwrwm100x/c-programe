#include <stdio.h>
int main() {
    int year;

    // User pora year loi ase
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year rule check kore
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);

    return 0;
}
