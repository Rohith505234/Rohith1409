#include <stdio.h>
#include <string.h> 
int main() {
    int empId = 5;
    char empName[50];
    strcpy(empName, "Puja"); 
    printf("Employee Name: %s\n", empName);
    printf("Employee ID: %d\n", empId);
    return 0;
}
