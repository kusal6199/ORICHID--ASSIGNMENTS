#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    
    printf("Sum = %d\n", add(num1, num2));
    printf("Difference = %d\n", subtract(num1, num2));
    printf("Product = %d\n", multiply(num1, num2));
    printf("Quotient = %.2f\n", divide(num1, num2));
    return 0;
}


int add(int a, int b) {
    return a + b;
}


int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}


float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return (float)a / b;
}
