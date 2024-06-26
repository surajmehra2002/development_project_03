#include <stdio.h>

int main()
 {
    int choice;
    char title[1][40];
    char author[1][30];

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
                printf("This is task 1: Add new book\n");
                
                break;
                
            case 2:
                printf("This is task 2: Display available books\n");
               
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
                
            default:
                printf("%d is not a valid entry\n", choice);
                break;
        }
    } while (choice != 0);

    
    return 0;
}