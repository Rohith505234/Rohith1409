#include <stdio.h>
void soundAnimal() {
    printf("Animal makes a sound\n");
}
void soundDog() {
    printf("Dog barks\n");
}
int main() {
    void (*sound)();  
    sound = soundAnimal;
    sound();
    sound = soundDog;
    sound(); 
    return 0;
}
