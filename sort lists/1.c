#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 10
typedef struct {
    int EmpId;
    char EmpName[50];
    int EmpSalary;
    int DeptId;
} Employee;
void printEmployee(Employee e) {
    printf("EmpId: %d, EmpName: %s, EmpSalary: %d, DeptId: %d\n", e.EmpId, e.EmpName, e.EmpSalary, e.DeptId);
}
void searchByName(Employee arr[], int size, const char* name) {
    printf("Employees with name '%s':\n", name);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].EmpName, name) == 0) {
            printEmployee(arr[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No employee with name %s found.\n", name);
    }
}
void searchByEmpId(Employee arr[], int size, int empId) {
    printf("Employee with EmpId = %d:\n", empId);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].EmpId == empId) {
            printEmployee(arr[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No employee with EmpId %d found.\n", empId);
    }
}
void searchByDeptId(Employee arr[], int size, int deptId) {
    printf("Employees with DeptId = %d:\n", deptId);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].DeptId == deptId) {
            printEmployee(arr[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No employee with DeptId %d found.\n", deptId);
    }
}
void copyEmployeeList(Employee source[], Employee dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = source[i];
    }
}

int copyEmployeesByName(Employee source[], Employee dest[], int size, const char* name) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(source[i].EmpName, name) == 0) {
            dest[count++] = source[i];
        }
    }
    return count;
}
int copyEmployeesBySalary(Employee source[], Employee dest[], int size, int salaryThreshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (source[i].EmpSalary > salaryThreshold) {
            dest[count++] = source[i];
        }
    }
    return count;
}
int main() {
    Employee employees[MAX_EMPLOYEES] = {
        {1, "Kishore", 1000, 1},
        {2, "Rohit", 1500, 2},
        {3, "Kishore", 3000, 3},
        {4, "Anil", 1000, 2},
        {5, "Sita", 4000, 4},
        {6, "John", 5000, 1},
        {7, "Raju", 1000, 4},
        {8, "Ram", 6000, 3},
        {9, "Geeta", 7000, 5},
        {10, "Mohan", 8000, 6}
    };
    searchByName(employees, MAX_EMPLOYEES, "Kishore");
    searchByEmpId(employees, MAX_EMPLOYEES, 4);
    searchByDeptId(employees, MAX_EMPLOYEES, 4);
    Employee copiedList[MAX_EMPLOYEES];
    copyEmployeeList(employees, copiedList, MAX_EMPLOYEES);
    printf("\nCopied employee list:\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printEmployee(copiedList[i]);
    }
    Employee kishoreList[MAX_EMPLOYEES];
    int kishoreCount = copyEmployeesByName(employees, kishoreList, MAX_EMPLOYEES, "Kishore");
    printf("\nEmployees named Kishore:\n");
    for (int i = 0; i < kishoreCount; i++) {
        printEmployee(kishoreList[i]);
    }
    Employee highSalaryList[MAX_EMPLOYEES];
    int highSalaryCount = copyEmployeesBySalary(employees, highSalaryList, MAX_EMPLOYEES, 2000);
    printf("\nEmployees with salary > 2000: Count = %d\n", highSalaryCount);
    for (int i = 0; i < highSalaryCount; i++) {
        printEmployee(highSalaryList[i]);
    }
    return 0;
}
