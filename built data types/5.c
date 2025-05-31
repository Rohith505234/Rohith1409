#include <stdio.h>
int main() {
    char a, b, c;
    printf("Enter letter: ");
    scanf(" %c", &a);
    printf("Enter letter: ");
    scanf(" %c", &b);
    printf("Enter letter: ");
    scanf(" %c", &c);
    printf("Reversed order: %c %c %c\n", c, b, a);
    return 0;
}
