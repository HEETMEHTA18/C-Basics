#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Prototypes
void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void reverseString(char str[]);
int sum(int a, int b);
void demonstratePointers();
void fileOperations();

#define MAX 100

// Structure Declaration
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

// Union Declaration
union Data {
    int i;
    float f;
    char str[20];
};

// Global Variable
int globalVar = 100;

int main() {
    // 1. Software, Hardware, Data Types, and Variables
    int num = 5; 
    char str[50] = "Hello, C Programming!";
    printf("Data Types - Integer: %d, String: %s\n", num, str);
    
    // 2. Branch and Loop Statements
    if (num > 0) {
        printf("Positive number\n");
    } else {
        printf("Non-positive number\n");
    }
    
    // For loop demonstrating array usage
    int arr[MAX];
    inputArray(arr, 5);
    printArray(arr, 5);

    // Switch Case example
    switch(num) {
        case 1:
            printf("Case 1\n");
            break;
        case 5:
            printf("Case 5\n");
            break;
        default:
            printf("Default case\n");
    }
    
    // 3. Array and String
    char str2[50] = "Programming";
    reverseString(str2);

    // 4. User-Defined Function
    printf("Sum of 5 and 10: %d\n", sum(5, 10));

    // 5. Structure & Union
    struct Student s1 = {"John", 1, 85.5};
    printf("Student Name: %s, Roll No: %d, Marks: %.2f\n", s1.name, s1.rollNo, s1.marks);
    
    union Data data;
    data.i = 5;
    printf("Union - Integer: %d\n", data.i);
    
    // 6. Pointers and Dynamic Memory Allocation
    demonstratePointers();
    
    // 7. File Management
    fileOperations();
    
    return 0;
}

// Function Definitions

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("Reversed String: %s\n", str);
}

int sum(int a, int b) {
    return a + b;
}

void demonstratePointers() {
    int var = 20;
    int *ptr = &var;
    printf("Pointer Example - Value: %d, Address: %p\n", *ptr, ptr);
    
    // Dynamic Memory Allocation
    int *arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return;
    }
    
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    printf("Dynamically allocated array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
}

void fileOperations() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return;
    }
    
    fprintf(file, "Hello, File Handling in C!\n");
    fclose(file);
    
    // Reading from file
    char buffer[255];
    file = fopen("example.txt", "r");
    if (file != NULL) {
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            printf("File Content: %s", buffer);
        }
        fclose(file);
    } else {
        printf("Error opening file for reading.\n");
    }
}
