
#include <stdio.h>
#include <string.h>
int main() {
    char firstName[50], lastName[50], fullName[100];
    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);
    strcpy(fullName, "Hello ");
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    printf("%s\n", fullName);

    return 0;
}
