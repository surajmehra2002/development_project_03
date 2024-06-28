#include <stdio.h>
#include <string.h> 

int main()
 {
    int choice;
    char title[5][40]; 
    char author[5][30]; 
   
    printf("\n\n********** Project-3 Library System Project **************\n");
    printf("\n1 - Add new book");
    printf("\n2 - Display available books");
    printf("\n3 - Borrow book");
    printf("\n4 - Return book");
    printf("\n5 - Search book by title");
    printf("\n6 - Search book by author");
    printf("\n0 - Exit\n");
    
    do {
        printf("Please enter the choice: ");
        scanf("%d", &choice);
        
        if (choice == 0) 
        {
            printf("Exiting the program \n");
        } 
        else if (choice == 1) 
        {
            printf("Enter title of the book:");
            scanf("%s", title[0]); 
            printf("Enter author of the book:");
            scanf("%s", author[0]);
            printf("\n");
            printf("\nTitle of the book: %s", title[0]);
            printf("\nAuthor of the book: %s", author[0]);
            printf("\nBook Added successfully!\n\n");
        } 
        else if (choice == 2) 
        {
            printf("this is task 2: display available books\n");
        } 
        else if (choice == 3)
         {
            printf("This is task 3: Borrow book\n");
        } 
        else if (choice == 4)
         {
            printf("This is task 4: Return book\n");
        } 
        else if (choice == 5)
         {
            printf("This is task 5: Search book by title\n");
        }
         else if (choice == 6) 
         {
            printf("This is task 6: Search book by author\n");
        } 
        else 
        {
           
            printf(" this is not a valid entry.\n Please enter a valid number\n ", choice);
             getchar(); 
        }
        
    } while (choice != 0);

    return 0;
}