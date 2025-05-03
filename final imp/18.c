#include <stdio.h>
#include <string.h>
int main() {
    char names[5][50]; // for Take 5 names with space or without space
    char temp[50]; // for bubble sort a temporary string
    int i, j;
    printf("Enter the names of %d students:\n", 5);
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        gets(names[i]); // take input of string with space or without space
    }
    // following loops is the loop of bubble sort of names(strings) in ascending oredr
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nSorted list of student names:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
    printf("\n24CE055 --> Urval Kheni\n");

    return 0;
}

