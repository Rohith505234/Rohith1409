#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNo;
};
void printDetails(struct Student s) {
    printf("Name: %s, Roll No: %d\n", s.name, s.rollNo);
}
int main() {
    struct Student s1, s2;
    strcpy(s1.name, "Ravi");
    s1.rollNo = 1;
    strcpy(s2.name, "Priya");
    s2.rollNo = 2;
    printDetails(s1);
    printDetails(s2);
    return 0;
}
