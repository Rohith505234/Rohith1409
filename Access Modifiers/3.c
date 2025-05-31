#include <stdio.h>
static int privateValue = 42;
int getPrivateValue() {
    return privateValue;
}
int main() {
    printf("Private Value (via getter): %d\n", getPrivateValue());
    return 0;
}
