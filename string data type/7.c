#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;
    char temp;
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for(i = 0; i < len - 1; i++) {
        for(j = i + 1; j < len; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("After sorting: %s\n", str);
    return 0;
}
