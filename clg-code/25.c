#include <stdio.h>
#include <string.h>
union library {
    struct {
        int accession_number;
        char title[100];
        char author[50];
        float price;
        int flag;  // 1 if issued otherwise 0
    } book;
};
int main() {
    union library lib;
    printf("\nEnter Book Details:\n");
    printf("==================\n");
    printf("Enter Accession Number: ");
    scanf("%d",&lib.book.accession_number);
    
    // Clear input buffer
    while (getchar() != '\n');
    
    printf("Enter Title: ");
    gets(lib.book.title);
   
    printf("Enter Author Name: ");
    gets(lib.book.author);
        
    printf("Enter Price: ");
    scanf("%f", &lib.book.price);
    
    printf("Is book issued? (1 for Yes, 0 for No): ");
    scanf("%d", &lib.book.flag);
    
    // Display book details
    printf("\nBook Details:\n");
    printf("============\n");
    printf("Accession Number: %d\n", lib.book.accession_number);
    printf("Title: %s\n", lib.book.title);
    printf("Author: %s\n", lib.book.author);
    printf("Price: Rs. %.2f\n", lib.book.price);
    printf("Status: %s\n", lib.book.flag ? "Issued" : "Available");
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");

    
    return 0;
}