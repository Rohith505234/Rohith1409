#include <stdio.h>
#include <string.h>
int main() {
    char str[100] = "Sun Rises in the West";
    char newStr[100];
    strncpy(newStr, str, strlen(str) - 4);  
    newStr[strlen(str) - 4] = '\0';
    strcat(newStr, "East");
    printf("Sentence after replacing: %s\n", newStr);
    return 0;
}
