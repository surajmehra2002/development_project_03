#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BOOKS 5
#define MAX_TITLE_LENGTH 10
#define MAX_AUTHOR_LENGTH 10
// Structure
struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int available;
};
struct Book library[MAX_BOOKS];
int numBooks = 0;

void addBook();

int main() {
    int choice;
    printf("****** Project 3 - Library Management System ******\n");
    printf("1. Add new book\n");
    printf("2. Display available books\n");
    printf("3. Borrow a book\n");
    printf("4. Return a book\n");
    printf("5. Search books by title\n");
    printf("6. Search books by author\n");
    printf("0. Exit\n");

    do {
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 0:
                printf("Exiting! Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 0 and 6.\n");
        }

    } while (choice != 0);

    return 0;
}

void addBook() {
    printf("\nTask 1: Add book\n");
    printf("Enter title of the book : ");
    getchar();
    fgets(library[numBooks].title, MAX_TITLE_LENGTH, stdin);
    library[numBooks].title[strcspn(library[numBooks].title, "\n")] = '\0';

    printf("Enter author of the book : ");
    fgets(library[numBooks].author, MAX_AUTHOR_LENGTH, stdin);
    library[numBooks].author[strcspn(library[numBooks].author, "\n")] = '\0';

    library[numBooks].available = 1;
    numBooks++;

    printf("Book added successfully!\n");
}