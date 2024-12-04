#include <stdio.h>
#define TOTAL_STUDENTS 10
// Function to calculate the categories
void calculateCategories(int *marks, int *distinction, int *firstClass, int *pass, int *fail) {
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        if (*(marks + i) >= 70) {
            (*distinction)++;
        } else if (*(marks + i) >= 60) {
            (*firstClass)++;
        } else if (*(marks + i) >= 40) {
            (*pass)++;
        } else {
            (*fail)++;
        }
    }
}

int main() {
    int marks[TOTAL_STUDENTS];
    int distinction = 0, firstClass = 0, pass = 0, fail = 0;

    // Reading the marks of the students
    printf("Enter marks of 10 students:\n");
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }


    calculateCategories(marks, &distinction, &firstClass, &pass, &fail);
    printf("DISTINCTION: %d\n", distinction);
    printf("FIRST CLASS: %d\n", firstClass);
    printf("PASS: %d\n", pass);
    printf("FAIL: %d\n", fail);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");

    return 0;
}
