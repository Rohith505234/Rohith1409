#include <stdio.h>
static void showValue(int x) { 
    printf("Value: %d\n", x);
}
int main() {
    int x = 10;
    showValue(x);
    return 0;
}
