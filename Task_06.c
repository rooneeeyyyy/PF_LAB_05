/*Task 6: Simple Calculator with Mode Selection
Write a program using a nested switch-case structure. The outer switch should ask the user to select a mode:
'1' for Basic Arithmetic or '2' for Power/Root operations. If mode '1' is selected, use an inner switch on an
operator character ('+', '-', '*', '/') to perform the corresponding operation on two numbers. If mode '2' is
selected, use an inner switch to choose between computing a square (case 's') or a square root (case 'r') of a
number, using the math library where needed.*/
#include <stdio.h>
#include <math.h>

int main() {
    char mode, operator;
    float num1, num2, result;

    printf("Enter 1 for Basic Arithmetic\n");
    printf("Enter 2 for Power/Root operations\n");
    scanf(" %c", &mode);

    switch(mode) {
        case '1':
            printf("Enter first numbers: \n");
            scanf("%f ", &num1);
            printf("Enter second numbers: \n");
            scanf("%f ", &num2);
            printf("Enter an operator (+, -, *, /): \n");
            scanf(" %c", &operator);

            switch(operator) {
                case '+':
                    result = num1 + num2;
                    printf("Result = %.2f", result);
                    break;
                case '-':
                    result = num1 - num2;
                    printf("Result = %.2f", result);
                    break;
                case '*':
                    result = num1 * num2;
                    printf("Result = %.2f", result);
                    break;
                case '/':
                    if(num2 != 0) {
                        result = num1 / num2;
                        printf("Result = %.2f", result);
                    }
                    else {
                        printf("Cannot divide by zero");
                    }
                    break;

                default:
                    printf("Invalid operator");
            }
            break;

        case '2':
            printf("Enter a number: \n");
            scanf("%f", &num1);

            printf("Enter 's' for square\n");
            printf("Enter 'r' for square root\n");
            scanf(" %c", &operator);

            switch(operator) {
                case 's':
                    result = num1 * num1;
                    printf("Square = %.2f", result);
                    break;

                case 'r':
                    if(num1 >= 0) {
                        result = sqrt(num1);
                        printf("Square root = %.2f", result);
                    }
                    else {
                        printf("Invalid number");
                    }
                    break;

                default:
                    printf("Invalid operation");
            }
            break;

        default:
            printf("Invalid mode");
    }

    return 0;
}