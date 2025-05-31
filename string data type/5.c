#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter the string in uppercase: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("String in lowercase: %s\n", str);
    return 0;
}
