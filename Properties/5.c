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
    EmployeeModel emp2 = {2, "Arjun", "arjun@example.com", 62000.75f, false};
    printf("EmpId: %d\n", emp2.EmpId);
    printf("EmpName: %s\n", emp2.EmpName);
    printf("EmailId: %s\n", emp2.EmailId);
    printf("Salary: %.2f\n", emp2.Salary);
    printf("IsEmployeeActive: %s\n", emp2.IsEmployeeActive ? "true" : "false");
    return 0;
}
