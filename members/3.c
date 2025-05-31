#include <stdio.h>
#include <string.h>
struct Person {
    char name[50]; 
};
static int count = 0;
void initPerson(struct Person *p, const char *name) {
    strcpy(p->name, name);
    count++; 
}
int main() {
    struct Person p1;
    initPerson(&p1, "Rohit");
    printf("Name: %s\n", p1.name);
    printf("Static count (number of persons): %d\n", count);
    return 0;
}
