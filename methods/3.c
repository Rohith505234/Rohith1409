#include <stdio.h>
void Calculator(int a, int b) {
    int sum = a + b;
    int product = a * b;

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
}
int main() {
    int a, b;
    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);
    Calculator(a, b);
    return 0;
}
