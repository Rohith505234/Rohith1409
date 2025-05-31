#include <stdio.h>
int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Equal to Operator: %s\n", (a == b) ? "True" : "False");
    printf("Greater than Operator: %s\n", (a > b) ? "True" : "False");
    printf("Less than Operator: %s\n", (a < b) ? "True" : "False");
    printf("Greater than or Equal to: %s\n", (a >= b) ? "True" : "False");
    printf("Lesser than or Equal to: %s\n", (a <= b) ? "True" : "False");
    printf("Not Equal to Operator: %s\n", (a != b) ? "True" : "False");
    return 0;
}
