#include <stdio.h>
void displayNameAge(char name[], int age) {
    printf("Name: %s, Age: %d\n", name, age);
}
void displayAgeName(int age, char name[]) {
    printf("Age: %d, Name: %s\n", age, name);
}
int main() {
    displayNameAge("Ravi", 25);
    displayAgeName(30, "Rohit");
    return 0;
}
