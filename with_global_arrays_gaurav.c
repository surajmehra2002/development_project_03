#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //for character checking function

#define MAX_BOOKS 5
#define MAX_TITLE_LENGTH 30
#define MAX_AUTHOR_LENGTH 30

char titles[MAX_BOOKS][MAX_TITLE_LENGTH];
char authors[MAX_BOOKS][MAX_AUTHOR_LENGTH];
int available[MAX_BOOKS];
int numBooks = 0;

void addBook();
void displayBooks();
int containsDigits(const char *str);

int main() {
    int choice;
    char input[10];
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
        if (fgets(input, sizeof(input), stdin)) {
            if (sscanf(input, "%d", &choice) != 1) {
                choice = -1;
            }
        } else {
            choice = -1;
        }

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
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

    char input[MAX_TITLE_LENGTH];
    int validInput = 0;

    do {
        printf("Enter title of the book : ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strlen(input) > 0 && !containsDigits(input)) {
            strcpy(titles[numBooks], input);
            validInput = 1;
        } else {
            printf("Invalid input. Title cannot contain numbers.\n");
        }
    } while (!validInput);

    validInput = 0;
    do {
        printf("Enter author of the book : ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strlen(input) > 0 && !containsDigits(input)) {
            strcpy(authors[numBooks], input);
            validInput = 1;
        } else {
            printf("Invalid input. Author name cannot contain numbers.\n");
        }
    } while (!validInput);

    available[numBooks] = 1;
    numBooks++;

    printf("Book added successfully!\n");
}

void displayBooks() {
    printf("\nTask 2: Available books\n");
    printf("Available books :\n");
    printf("=======================================\n");
    printf("Title\t\t\t\tAuthor\n");
    printf("=======================================\n");

    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (available[i]) {
            printf("%-30s\t%s\n", titles[i], authors[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No books available.\n");
    }
}

int containsDigits(const char *str) {
    while (*str) {
        if (isdigit(*str)) {
            return 1;
        }
        str++;
    }
    return 0;
}