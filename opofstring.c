#include <stdio.h>
#define MAX_NOTE_LENGTH 100
//Calculate the length of a string
int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
//Reverse a string
void stringReverse(char *str) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
//Compare two strings
int stringCompare(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

//Here we Copy one string to another
void stringCopy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

//Concatenate two strings
void stringConcat(char *dest, char *src) {
    int destLen = stringLength(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[destLen + i] = src[i];
        i++;
    }
    dest[destLen + i] = '\0';
}

int main() {
    char note1[MAX_NOTE_LENGTH], note2[MAX_NOTE_LENGTH], temp[MAX_NOTE_LENGTH];
    int choice;

    while (1) {
        printf("\n--- Note-Taking Application ---\n");
        printf("1. Calculate the length of a note\n");
        printf("2. Reverse a note\n");
        printf("3. Compare two notes\n");
        printf("4. Copy a note\n");
        printf("5. Concatenate two notes\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
        case 1:
            printf("Enter the note: ");
            fgets(note1, MAX_NOTE_LENGTH, stdin);
            note1[stringLength(note1) - 1] = '\0';
            printf("Length of the note: %d\n", stringLength(note1));
            break;

        case 2:
            printf("Enter the note to reverse: ");
            fgets(note1, MAX_NOTE_LENGTH, stdin);
            note1[stringLength(note1) - 1] = '\0';
            stringReverse(note1);
            printf("Reversed note: %s\n", note1);
            break;

        case 3:
            printf("Enter the first note: ");
            fgets(note1, MAX_NOTE_LENGTH, stdin);
            note1[stringLength(note1) - 1] = '\0';
            printf("Enter the second note: ");
            fgets(note2, MAX_NOTE_LENGTH, stdin);
            note2[stringLength(note2) - 1] = '\0';
            int cmp = stringCompare(note1, note2);
            if (cmp == 0) {
                printf("The notes are identical.\n");
            } else if (cmp < 0) {
                printf("The first note comes before the second note alphabetically.\n");
            } else {
                printf("The first note comes after the second note alphabetically.\n");
            }
            break;

        case 4:
            printf("Enter the note to copy: ");
            fgets(note1, MAX_NOTE_LENGTH, stdin);
            note1[stringLength(note1) - 1] = '\0';
            stringCopy(temp, note1);
            printf("Copied note: %s\n", temp);
            break;

        case 5:
            printf("Enter the first note: ");
            fgets(note1, MAX_NOTE_LENGTH, stdin);
            note1[stringLength(note1) - 1] = '\0';
            printf("Enter the second note: ");
            fgets(note2, MAX_NOTE_LENGTH, stdin);
            note2[stringLength(note2) - 1] = '\0';
            stringConcat(note1, note2);
            printf("Concatenated note: %s\n", note1);
            break;

        case 6:
            printf("Exiting the application.\n");
            printf(".......................................................\n");
            printf("24CE064-HEET MEHTA");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}