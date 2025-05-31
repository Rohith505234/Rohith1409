#include <stdio.h>
void show() {
    printf("No parameters\n");
}
void showMessage(char *msg) {
    printf("Message: %s\n", msg);
}
int main() {
    show();
    showMessage("Hello World");
    return 0;
}
