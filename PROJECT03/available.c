#include <stdio.h>
#include <string.h>

int main()
 {
    char book[5][100];
    char authorname[5][100];
    int numbook = 0;
    char tittle[100];
     char author[100];
    int choice;

    char title[100];  
    printf("please enter your choice \n");
   scanf("%d",&choice); 
    printf("AVAILABLE BOOK\n");

    printf("TITTLE:\n ");
    scanf("%s", title); 
    strcpy(book[numbook], title);

    printf("AUTHOR: \n");
    scanf("%s", author); 
    strcpy(authorname[numbook], author);

    numbook++; 

    printf("\nAvailable books:\n");
    printf("--------------------------------\n");
    printf("Title\t\tAuthor\n");
    printf("--------------------------------\n");

    for (int i = 0; i < numbook; i++) {
        printf("%s\t\t%s\n", book[i], authorname[i]);
    }

    printf("--------------------------------\n");

    return 0;
}
