#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store student details
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Function Prototypes
int calculateArea(int length, int breadth);
int isEven(int num);
int findLargest(int a, int b, int c);
void displayMultiplicationTable(int num);
void printPrimeNumbers(int limit);
int sumArray(int arr[], int size);
void multiplyMatrices(int mat1[2][2], int mat2[2][2], int result[2][2]);
void reverseString(char str[]);
int factorial(int n);
int gcd(int a, int b);
float calculateAverage(int arr[], int size);
void swapUsingPointers(int *a, int *b);
void dynamicMemoryExample();
void fileHandlingExample();

int main() {
    // Basics of Programming
    int length = 5, breadth = 10;
    printf("Area of Rectangle: %d\n", calculateArea(length, breadth));

    int num = 5;
    printf("%d is %s\n", num, isEven(num) ? "Even" : "Odd");

    // Branching and Looping
    printf("Largest of 3 numbers (3, 7, 5): %d\n", findLargest(3, 7, 5));

    printf("Multiplication Table of 5:\n");
    displayMultiplicationTable(5);

    printf("Prime numbers between 1 and 50:\n");
    printPrimeNumbers(50);

    // Arrays and Strings
    int arr[] = {1, 2, 3, 4, 5};
    printf("Sum of array: %d\n", sumArray(arr, 5));

    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    multiplyMatrices(mat1, mat2, result);
    printf("Matrix Multiplication Result:\n");
    printf("%d %d\n%d %d\n", result[0][0], result[0][1], result[1][0], result[1][1]);

    char str[] = "hello";
    reverseString(str);
    printf("Reversed String: %s\n", str);

    // Functions
    printf("Factorial of 5: %d\n", factorial(5));
    printf("GCD of 48 and 18: %d\n", gcd(48, 18));
    printf("Average of Array: %.2f\n", calculateAverage(arr, 5));

    // Pointers
    int x = 10, y = 20;
    printf("Before Swap: x=%d, y=%d\n", x, y);
    swapUsingPointers(&x, &y);
    printf("After Swap: x=%d, y=%d\n", x, y);

    dynamicMemoryExample();

    // File Handling
    fileHandlingExample();

    return 0;
}

// Function Definitions

// Basics of Programming
int calculateArea(int length, int breadth) {
    return length * breadth;
}

int isEven(int num) {
    return num % 2 == 0;
}

// Branching and Looping
int findLargest(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

void displayMultiplicationTable(int num) {
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", num, i, num * i);
}

void printPrimeNumbers(int limit) {
    for (int num = 2; num <= limit; num++) {
        int isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
    }
    printf("\n");
}

// Arrays and Strings
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

void multiplyMatrices(int mat1[2][2], int mat2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }
}

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Functions
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

float calculateAverage(int arr[], int size) {
    return (float)sumArray(arr, size) / size;
}

// Pointers
void swapUsingPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void dynamicMemoryExample() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("Dynamic Array Input (5 integers): ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Dynamic Array Elements: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);
    printf("\nMemory Freed!\n");
}

// File Handling
void fileHandlingExample() {
    FILE *file = fopen("sample.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "Hello, this is a sample file.\n");
    fclose(file);

    file = fopen("sample.txt", "r");
    char line[100];
    while (fgets(line, sizeof(line), file))
        printf("%s", line);
    fclose(file);
}
