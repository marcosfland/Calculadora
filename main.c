#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, s, c, t): ");
    scanf(" %c", &operator);

    if (operator == 's' || operator == 'c' || operator == 't') {
        double result;
        printf("Enter angle in radians: ");
        scanf("%lf", &num2);

        switch (operator) {
            case 's':
                result = sin(num2);
                printf("Sine: %lf\n", result);
                break;
            case 'c':
                result = cos(num2);
                printf("Cosine: %lf\n", result);
                break;
            case 't':
                result = tan(num2);
                printf("Tangent: %lf\n", result);
                break;
            default:
                printf("Invalid operator!\n");
                break;
        }
    } else {
        printf("Enter second number: ");
        scanf("%lf", &num2);

        double result;
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Sum: %lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Difference: %lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Product: %lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Quotient: %lf\n", result);
                } else {
                    printf("Division by zero is not allowed!\n");
                }
                break;
            default:
                printf("Invalid operator!\n");
                break;
        }
    }

    return 0;
}