#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int empId;
};
void setDetails(struct Employee *e, const char *name, int id) {
    strcpy(e->name, name);
    e->empId = id;
}
void displayDetails(struct Employee e) {
    printf("Employee Name: %s\n", e.name);
    printf("Employee ID: %d\n", e.empId);
}
int main() {
    struct Employee emp;
    setDetails(&emp, "Rohit", 101);
    displayDetails(emp);
    return 0;
}
