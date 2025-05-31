#include <stdio.h>
struct Demo {
    int dummy;  
};
static void staticMethod() {
    printf("This is a static method (simulated).\n");
}
int main() {
    struct Demo d;
    staticMethod();  
    return 0;
}
