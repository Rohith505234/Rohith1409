#include <stdio.h>
typedef struct {
    int x;
    char name[20];
} Demo; 
int main() {
    Demo d = {25, "Default"};
    printf("x: %d\n", d.x);
    printf("name: %s\n", d.name);
    return 0;
}
