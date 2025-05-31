#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int Id;
    char Name[50];
} Student;
void printIntArray(int *arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void printStudents(Student *students, int count) {
    for (int i = 0; i < count; i++) {
        printf("Id: %d, Name: %s\n", students[i].Id, students[i].Name);
    }
}
int main() {
    int *intList = malloc(5 * sizeof(int));
    int size = 5;
    intList[0] = 10;
    intList[1] = 20;
    intList[2] = 30;
    intList[3] = 40;
    intList[4] = 50;
    printf("Integer list using for loop:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", intList[i]);
    }
    printf("Integer list using while loop:\n");
    int i = 0;
    while (i < size) {
        printf("%d\n", intList[i]);
        i++;
    }
    char *strList[5] = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};
    printf("String list using for loop:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strList[i]);
    }
    printf("String list using while loop:\n");
    i = 0;
    while (i < 5) {
        printf("%s\n", strList[i]);
        i++;
    }
    Student students[10];
    for (int i = 0; i < 10; i++) {
        students[i].Id = i + 1;
        sprintf(students[i].Name, "Student%d", i + 1);
    }
    printf("Student list:\n");
    printStudents(students, 10);
    free(intList);
    return 0;
}
