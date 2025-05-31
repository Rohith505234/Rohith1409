#include <stdio.h>
int add2(int a, int b) {
    return a + b;
}
int add3(int a, int b, int c) {
    return a + b + c;
}
int main() {
    printf("Sum of 2 numbers: %d\n", add2(10, 20));
    printf("Sum of 3 numbers: %d\n", add3(10, 20, 30));
    return 0;
}
