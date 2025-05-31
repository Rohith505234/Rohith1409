#include <stdio.h>
#include <string.h>
#define MAX_ROWS 5
#define MAX_COLS 4
#define MAX_STR_LEN 50
typedef struct {
    int EmpId[MAX_ROWS];
    char EmpName[MAX_ROWS][MAX_STR_LEN];
    int EmpSalary[MAX_ROWS];
    char Department[MAX_ROWS][MAX_STR_LEN];
    int rowCount;
} SimpleDataTable;
void addRow(SimpleDataTable *table, int empId, const char *empName, int salary, const char *dept) {
    if (table->rowCount < MAX_ROWS) {
        table->EmpId[table->rowCount] = empId;
        strncpy(table->EmpName[table->rowCount], empName, MAX_STR_LEN);
        table->EmpSalary[table->rowCount] = salary;
        strncpy(table->Department[table->rowCount], dept, MAX_STR_LEN);
        table->rowCount++;
    } else {
        printf("Table is full, cannot add more rows.\n");
    }
}

void printEmpIdFor(SimpleDataTable *table) {
    printf("EmpId column using for loop:\n");
    for (int i = 0; i < table->rowCount; i++) {
        printf("%d\n", table->EmpId[i]);
    }
}
void printEmpIdForeach(SimpleDataTable *table) {
    printf("EmpId column using foreach (emulated):\n");
    int *ptr = table->EmpId;
    for (int i = 0; i < table->rowCount; i++) {
        printf("%d\n", *(ptr + i));
    }
}
int main() {
    SimpleDataTable dt = { .rowCount = 0 };
    addRow(&dt, 101, "Alice", 5000, "HR");
    addRow(&dt, 102, "Bob", 6000, "IT");
    addRow(&dt, 103, "Charlie", 7000, "Finance");
    addRow(&dt, 104, "David", 8000, "Marketing");
    addRow(&dt, 105, "Eva", 5500, "Sales");
    printEmpIdFor(&dt);
    printEmpIdForeach(&dt);
    return 0;
}
