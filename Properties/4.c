#include <stdio.h>
#include <stdbool.h>
typedef struct {
    int EmpId;
    char EmpName[50];
    char EmailId[50];
    float Salary;
    bool IsEmployeeActive;
} 
EmployeeModel;
int main() {
    EmployeeModel emp1 = {1, "Puja", "puja@example.com", 50000.5f, true};
    printf("EmpId: %d\n", emp1.EmpId);
    printf("EmpName: %s\n", emp1.EmpName);
    printf("EmailId: %s\n", emp1.EmailId);
    printf("Salary: %.2f\n", emp1.Salary);
    printf("IsEmployeeActive: %s\n", emp1.IsEmployeeActive ? "true" : "false");
    return 0;
}
