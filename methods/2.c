#include <stdio.h>
void staticMethod() {
    printf("This is a static method (function).\n");
}
struct Sample {
    void (*instanceMethod)();
};
void printInstanceMessage() {
    printf("This is an instance method.\n");
}
int main() {
    staticMethod();
    struct Sample obj;
    obj.instanceMethod = printInstanceMessage;
    obj.instanceMethod(); 
    return 0;
}
