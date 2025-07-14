#include <stdio.h>

int main() {
    char op;       // Operator store koribo
    double num1, num2; // Duita number store koribo

    // Operator loi ase
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Space diya hoise jate newline ignore kore

    // Duita number loi ase
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch-case operator anusar operation kore
    switch(op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
