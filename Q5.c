#include <stdio.h>
int main() {
    int num1, num2;// num1 , num2 duta variable lole

    // user or pora duta number input kori num1&num2 variable ot store korilu
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
   
    // if else logot condition check korilu
    if (num1 > num2)
        printf("%d is larger.\n", num1);
    else if (num2 > num1)
        printf("%d is larger.\n", num2);
    else
        printf("Both numbers are equal.\n");

    return 0;
}
