#include <stdio.h>
int main() {
    char *arr[] = { "JalaTechnologies" };
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Array printing using for loop:\n");
    for(int i = 0; i < length; i++) {
        printf("%s\n", arr[i]);
    }
    printf("Array printing using simulated foreach loop:\n");
    for(char **ptr = arr; ptr < arr + length; ptr++) {
        printf("%s\n", *ptr);
    }
    return 0;
}
