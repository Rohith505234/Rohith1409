#include <stdio.h>
void accessStaticVar() {
    static int count = 10;
    printf("Static Variable: %d\n", count);
}
int main() {
    accessStaticVar();  
    return 0;
}
