#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int main()
{
    FILE *file;
    char word[MAX_WORD_LENGTH];

    // Open the file in read mode
    file = fopen("Demo.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Could not open file Demo.txt\n");
        return 1; // Exit if file cannot be opened
    }

    // Read the words from the file
    while (fscanf(file, "%s", word) != EOF)
    {
        // Reverse  words
        int len = strlen(word); // length of the word
        for (int i = len - 1; i >= 0; i--)
        {
            printf("%c", word[i]); // Print the word in reverse order
        }
        printf(" ");
    }
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    fclose(file); // Close the file after reading
    return 0;
}
