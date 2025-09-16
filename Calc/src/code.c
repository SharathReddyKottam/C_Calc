#include <stdio.h>
#include <math.h>

// Helper functions
void inputTwo(double *a, double *b) {
    printf("Enter two numbers: ");
    scanf("%lf %lf", a, b);
}

int inputInt(int n) {
    printf("Enter an integer: ");
    scanf("%d", &n);
    return n;
}

int main(void) {
    int choice;
    double num1, num2;

    do {
        printf("\n===== Simple Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Factorial\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Addition
                inputTwo(&num1, &num2);
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case 2: // Subtraction
                inputTwo(&num1, &num2);
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case 3: // Multiplication
                inputTwo(&num1, &num2);
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case 4: // Division
                inputTwo(&num1, &num2);
                if (num2 == 0)
                    printf("Error: Division by zero\n");
                else
                    printf("Result: %.2lf\n", num1 / num2);
                break;
            case 5: // Power
                inputTwo(&num1, &num2);
                printf("Result: %.2lf\n", pow(num1, num2));
                break;
            case 6: { // Factorial
                int n = inputInt();
                if (n < 0) {
                    printf("Error: Factorial of negative number not defined\n");
                } else {
                    long long fact = 1;
                    for (int i = 1; i <= n; i++) fact *= i;
                    printf("Result: %lld\n", fact);
                }
                break;
            }
            case 0:
                printf("Exiting calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
