#include <stdio.h>
typedef struct {
    char name[50];
} Employee;
int main() {
    Employee emp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Employee Name: %s\n", emp.name);
    return 0;
}
