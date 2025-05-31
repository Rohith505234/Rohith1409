#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Output: even\n");
    else
        printf("Output: odd\n");
    return 0;
}
