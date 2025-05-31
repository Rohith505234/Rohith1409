#include <stdio.h>
typedef struct {
    int empId; 
} Employee;
void printEmployee(Employee e) {
    printf("Employee ID (Read-Only): %d\n", e.empId);
}
int main() {
    Employee emp = {101};
    printEmployee(emp);
    return 0;
}
