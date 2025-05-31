
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;
    printf("Enter a string: ");
    gets(str); 
    for(i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxChar = (char)i;
        }
    }
    printf("The highest frequency character is '%c' appearing %d times\n", maxChar, max);
    return 0;
}
