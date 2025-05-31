#include <stdio.h>
void printNameAge(char *name, int age) {
    printf("Name: %s, Age: %d\n", name, age);
}
void printAgeName(int age, char *name) {
    printf("Age: %d, Name: %s\n", age, name);
}
int main() {
    printNameAge("Alice", 25);
    printAgeName(30, "Bob");
    return 0;
}
