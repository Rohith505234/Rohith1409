#include <stdio.h>
void convertInt(int num) {
    printf("Integer: %d\n", num);
}
void convertFloat(float num) {
    printf("Float: %.2f\n", num);
}
int main() {
    convertInt(10);
    convertFloat(10.5);
    return 0;
}
