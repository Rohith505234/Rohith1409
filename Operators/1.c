#include <stdio.h>
int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Addition Operator: %d\n", a + b);
    printf("Subtraction Operator: %d\n", a - b);
    printf("Multiplication Operator: %d\n", a * b);
    if(b != 0) {
        printf("Division Operator: %d\n", a / b);
        printf("Modulo Operator: %d\n", a % b);
    } else {
        printf("Division and Modulo cannot be performed (b = 0)\n");
    }
    return 0;
}
