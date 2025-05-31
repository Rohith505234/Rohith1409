#include <stdio.h>
#include <string.h>
struct Car {
    char color[20];
    int maxSpeed;
};
void showDetails(struct Car c) {
    printf("Color: %s\n", c.color);
    printf("Max Speed: %d\n", c.maxSpeed);
}
int main() {
    struct Car myCar;
    strcpy(myCar.color, "Red");
    myCar.maxSpeed = 200;
    showDetails(myCar);
    return 0;
}
