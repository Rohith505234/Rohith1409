#include <stdio.h>
#include <string.h>
struct Car {
    char color[20];
    int maxSpeed;
};
int main() {
    struct Car myObj;
    strcpy(myObj.color, "Blue");
    myObj.maxSpeed = 180;
    printf("Color: %s\n", myObj.color);
    printf("Max Speed: %d\n", myObj.maxSpeed);
    return 0;
}
