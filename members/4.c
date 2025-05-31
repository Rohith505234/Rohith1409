#include <stdio.h>
void changeStaticVariable() {
    static int value = 5; 
    printf("Before change: %d\n", value);
    value = 20; 
    printf("After change: %d\n", value);
}
int main() {
    changeStaticVariable();
    return 0;
}
