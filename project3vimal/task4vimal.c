#include <stdio.h>
#include <string.h>
void add_book();
void display_book();
void borrow_book();
void return_book();


char books[10][50];
char authors[10][50];
char borrow_list_books[10][50];
char borrow_list_authors[10][50];

int bookCount = 0;

void add_book()
{
    char title[50];
    char author[50];

    printf("Enter the title of the book: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    printf("Enter the author of the book: ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = '\0';

    strcpy(books[bookCount], title);
    strcpy(authors[bookCount], author);

    printf("Book added successfully!\n");
    bookCount++;
}

void display_book()
{
    if (bookCount == 0)
    {
        printf("Sorry! No books available in library...\n");
    }
    else
    {
        printf("\nAvailable books are:\n");
        printf("=======================================================================\n");
        printf("Title\t\t\t\t\t Author\n");
        printf("=======================================================================\n");

        for (int i = 0; i < bookCount; i++)
        {
            printf("%s\t\t\t\t%s\n", books[i], authors[i]);
        }
        printf("=======================================================================\n");
    }
}

void borrow_book()
{
    char borrow[50];
    int found = 0;

    printf("Enter the title of the book you want to borrow: ");
    fgets(borrow, sizeof(borrow), stdin);
    borrow[strcspn(borrow, "\n")] = '\0';

    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(borrow, books[i]) == 0)
        {
            printf("You have borrowed '%s' by %s\n", books[i], authors[i]);

            // Add to borrowed list
            for (int j = 0; j < 10; j++)
            {
                if (strcmp(borrow_list_books[j], "") == 0)
                {
                    strcpy(borrow_list_books[j], books[i]);
                    strcpy(borrow_list_authors[j], authors[i]);
                    break;
                }
            }

            for (int k = i; k < bookCount - 1; k++)
            {
                strcpy(books[k], books[k + 1]);
                strcpy(authors[k], authors[k + 1]);
            }
            bookCount--;
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("No '%s' book available for borrowing...\n", borrow);
    }
}

void return_book()
{
    char title[50];
    int found = 0;

    printf("Enter the title of the book you want to return: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(borrow_list_books[i], title) == 0)
        {
            printf("Book '%s' returned successfully.\n", title);

            strcpy(books[bookCount], borrow_list_books[i]);
            strcpy(authors[bookCount], borrow_list_authors[i]);
            bookCount++;

            strcpy(borrow_list_books[i], "");
            strcpy(borrow_list_authors[i], "");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Book '%s' was not borrowed or does not exist in the library.\n", title);
    }
}
int main()
{
    int task;

    printf("\n******** Project 03 - Library Management System ********\n");
    printf("1- Add New Book\n");
    printf("2- Display Available Books\n");
    printf("3- Borrow Book\n");
    printf("4- Return Book\n");
    printf("5- Search Book by Author\n");
    printf("0- Exit\n\n");

    do
    {
        printf("\nPlease Enter The choice: ");
        scanf("%d", &task);
        getchar();

        switch (task)
        {
        case 1:
            add_book();
            break;
        case 2:
            display_book();
            break;
        case 3:
            borrow_book();
            break;
        case 4:
            return_book();
            break;
  
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Please enter a valid task number (0 to 5).\n\n");
            break;
        }

    } while (task != 0);

    return 0;
}