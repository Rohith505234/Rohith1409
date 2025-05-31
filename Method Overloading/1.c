#include <stdio.h>
int add2(int a, int b) {
    return a + b;
}
int add3(int a, int b, int c) {
    return a + b + c;
}
int main() {
    printf("Addition with 2 parameters: %d\n", add2(10, 20));
    printf("Addition with 3 parameters: %d\n", add3(10, 20, 30));
    return 0;
}
