#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: %d, %d\n", a, b);
    return 0;
}
