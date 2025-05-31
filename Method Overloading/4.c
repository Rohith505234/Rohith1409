#include <stdio.h>
void Division(int a, int b) {
    if (b != 0) {
        float result = (float)a / b;
        printf("Division: %.2f\n", result);
    } else {
        printf("Cannot divide by zero.\n");
    }
}
int main() {
    Division(50, 5);
    return 0;
}
