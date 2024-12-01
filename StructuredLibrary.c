#include <stdio.h>

//Structure for Book Detail
struct Book {
    char title[100];
    char author[100];
    float amount;
};
//Display book Details
void displayBookDetails(struct Book b) {
    printf("Book Title: %s\n", b.title);
    printf("Author Name: %s\n", b.author);
    printf("Amount: %.2f\n", b.amount);
}

int main() {
    struct Book book1;
    printf("Enter the book title :: ");
    gets(book1.title);    
    printf("Enter the author name: ");
    gets(book1.author);
    printf("Enter the book amount: ");
    scanf("%f", &book1.amount);
    printf("\nBook Details:\n");
    displayBookDetails(book1);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");


    return 0;
}
