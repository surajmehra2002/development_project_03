#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char books[10][50];
    char authors[10][50];
    int bookCount = 0;

    char title[50];
    char name[50];

    printf("Enter the title of the book: ");
    scanf("%s", title);

    printf("Enter the author of the book: ");
    scanf("%s",name);
    strcpy(authors[bookCount], name);

    printf("\nAvailable books are:\n");

    printf("\n=======================================================================\n");
    printf("Title\t\t\t\t\t Author");
    printf("\n=======================================================================\n");

    for (int i = 0; i <= bookCount; i++)
    {
        printf("%s\t\t\t\t%s", books[i], authors[i]);
        printf("\n");
    }
    printf("\n=======================================================================\n");

    return 0;
}
