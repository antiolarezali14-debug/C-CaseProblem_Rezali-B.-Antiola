#include <stdio.h>

int main() {
    int num1, num2;
    float result;
    char op;

  
    printf("Rezali B. Antiola \n");
    printf("ID Number:2025304117\n");
    printf("----------------------------------\n");

  
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    printf("Choose an operator (+, -, *, /): ");
    scanf(" %c", &op);  

    
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("the sum of : %d and %d is %.0f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("the Difference of : %d and %d is %.0f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("The Product of: %d and %d is %.0f\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = (float)num1 / num2;
                printf("The Quotient of: %d and %d is %.2f\n", num1, num2, result);
            }
            break;

        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}