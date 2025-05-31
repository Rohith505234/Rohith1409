#include <stdio.h>
int main() {
    int count, number = 2, printed = 0;
    printf("Enter number: ");
    scanf("%d", &count);
    printf("First %d even numbers are:\n", count);
    while (printed < count) {
        printf("%d ", number);
        number += 2;
        printed++;
    }
    printf("\n");
    return 0;
}
