#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char str[100];
    
    // Step 1: Open a file for writing ("w" mode)
    file = fopen("example.txt", "w");  // Open for writing
    if (file == NULL) {  // Error handling if file can't be opened
        printf("Error opening file for writing\n");
        return 1;
    }

    // Step 2: Write to the file
    fprintf(file, "Hello, Guys!\n");    // Write a formatted string to the file
    fputs("This is a test of file handling in C.\n", file);  // Write a string without formatting
    fputc('A', file);  // Write a single character

    // After writing, close the file
    fclose(file);  // Always close the file after writing

    // Step 3: Open the file for reading ("r" mode)
    file = fopen("example.txt", "r");  // Open for reading
    if (file == NULL) {  // Error handling if file can't be opened
        printf("Error opening file for reading\n");
        return 1;
    }

    // Step 4: Read from the file
    printf("\nReading from file:\n");

    // Method 1: Read and print each character one by one (fgetc)
    printf("Reading using fgetc:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {  // Read until end of file (EOF)
        putchar(ch);  // Print each character
    }

    // Reset the file pointer to the beginning of the file (fseek or rewind)
    // rewind(file);  // Same as fseek(file, 0, SEEK_SET);
      fseek(file,0,SEEK_SET);
    // Method 2: Read and print line by line (fgets)
    printf("\nReading using fgets:\n");
    while (fgets(str, sizeof(str), file) != NULL) {  // Read one line at a time
        printf("%s", str);  // Print the line
    }

    // Step 5: Open the file for reading and writing ("r+" mode)
    file = fopen("example.txt", "r+");  // Open for reading and writing
    if (file == NULL) {  // Error handling
        printf("Error opening file for reading and writing\n");
        return 1;
    }

    // Step 6: Modify the file content by writing at the current file position
    fseek(file, 0, SEEK_END);  // Move the pointer to the end of the file
    fprintf(file, "\nThis text is appended using r+ mode!");

    // Step 7: Close the file after all operations
    fclose(file);

    // Step 8: Open and display the updated content of the file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    // Print the updated content
    printf("\n\nUpdated file content:\n");
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }

    // Final step: Close the file
    fclose(file);

    return 0;
}
