#include <stdio.h>
#include <string.h> 

int main() {
    int choice;
    char title[5][40]; 
    char author[5][30]; 
    int numBooks = 0; 

    printf("\n\n********** Project-3 Library System Project **************\n");
    printf("\n1 - Add new book");
    printf("\n2 - Display available books");
    printf("\n3 - Borrow book");
    printf("\n4 - Return book");
    printf("\n5 - Search book by title");
    printf("\n6 - Search book by author");
    printf("\n7 - Exit\n");
    
    do {
        printf("Please enter the choice: ");
        scanf("%d", &choice);
        
        switch(choice) {

            case 1:
            printf("Enter title of the book:");
            scanf("%s",&title);
            printf("Enter author of the book:");
            scanf("%s",&author);
            printf("\n");
            

            printf("\nTitle of the book: %s", title);
            printf("\nAuthor of the book: %s",author);
              printf("\nBook Added successfully!\n\n");

            case 2:
                 printf("this is task 2: display avilable books\n");
                 break;
                  
                
            case 3:
                printf("This is task 3: Borrow book\n");
                break;
                
            case 4:
                printf("This is task 4: Return book\n");
                break;
                
            case 5:
                printf("This is task 5: Search book by title\n");
                break;
                
            case 6:
                printf("This is task 6: Search book by author\n");
                break;
             case 7:
             if (choice == 0) {
                    printf("%d is not a valid entry.\n\n exit this code", choice);
                } else {
                    getchar(); 
                    printf("%d is not a valid entry.\nPlease enter a valid number.\n\n", choice);
                }
            
            default:
                
                printf("%d is not a valid entry.\n", choice);
                
              break;
            
             
        }
    } while (choice != 0);

    return 0;
}