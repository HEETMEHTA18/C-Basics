#include <stdio.h>

#define FILENAME "marks.txt"

int main() {
    FILE *file;
    int mark;

    
    file = fopen(FILENAME, "w");  // Open the file in write mode
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1; 
    }

    
    printf("Enter 5 student marks: \n");    // Write marks of 5 students to the file
    for (int i = 0; i < 5; i++) {
        printf("Student %d mark: ", i + 1);
        scanf("%d", &mark);
        putw(mark, file);  // Write the mark to the file
    }

   
    fclose(file);     // Close the file after writing


    file = fopen(FILENAME, "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    
    printf("\nStudent marks read from the file: \n");    // Read and display marks from the file
    for (int i = 0; i < 5; i++) {
        mark = getw(file);  // Read the mark from the file
        printf("Student %d mark: %d\n", i + 1, mark);
    }

    
    fclose(file);  // Close the file after reading
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}
