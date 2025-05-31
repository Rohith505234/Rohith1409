#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a symbol: ");
    scanf(" %c", &ch);
    if (islower(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("It is a lowercase vowel\n");
        } else {
            printf("It is a lowercase letter but not a vowel\n");
        }
    } else if (isdigit(ch)) {
        printf("It is a digit\n");
    } else {
        printf("It is another symbol\n");
    }
    return 0;
}
