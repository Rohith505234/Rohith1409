#include <stdio.h>
typedef struct {
    int StudentId;
    char StudentName[50];
} 
Student;
int main() {
    Student s;
    s.StudentId = 101;
    sprintf(s.StudentName, "santhi");
    printf("StudentId: %d\n", s.StudentId);
    printf("StudentName: %s\n", s.StudentName);
    return 0;
}
