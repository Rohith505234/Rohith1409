#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
};
void setPerson(struct Person *p, const char *name, int age) {
    strcpy(p->name, name);
    p->age = age;
}
void setPersonDefault(struct Person *p) {
    strcpy(p->name, "Unknown");
    p->age = 0;
}
void display(struct Person p) {
    printf("Name: %s, Age: %d\n", p.name, p.age);
}
int main() {
    struct Person p1, p2;
    setPersonDefault(&p1);
    setPerson(&p2, "Puja", 25);
    display(p1);
    display(p2);
    return 0;
}
