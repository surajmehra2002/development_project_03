#include <stdio.h>
#include <string.h>

int main()
 {
    char book[5][100];
    char authorname[5][100];
    int numbook = 0;
    char title[100];
    char author[100];
    int choice;

    do {
        printf("\nPlease enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
         {
            case 2:


            printf("\nAVAILABLE BOOK\n");

            
                printf("\n Title:\n");
                scanf(" %s", title);
                strcpy(book[numbook], title);

                printf("\n Author :\n");
                scanf(" %s", author); 
                strcpy(authorname[numbook], author);

                numbook++;

                printf("\nAvailable books:\n");
                printf("--------------------------------\n");
                printf("Title\t\tAuthor\n");
                printf("--------------------------------\n");
                for (int i = 0; i < numbook; i++)
                 {
                    printf("%s\t\t%s\n", book[i], authorname[i]);
                }
                printf("--------------------------------\n");
                
                

                
                break;
            case 0:
                printf("\nExiting...\n");
                break;
            default:
                printf("\n Please enter 1 to add a book or 0 to exit.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
