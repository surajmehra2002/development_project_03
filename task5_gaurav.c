#include <stdio.h>
#include <string.h>

/*All globle variable*/
 
char books[10][50];
char authors[10][50];
char borrow_list_books[10][50];
char borrow_list_authors[10][50];

int bookCount = 0;
    

/*function declearation*/
void add_book();     
void display_book();     
void borrow_book();     
void return_book();
void search_by_title(); //added func



void add_book()           
{
    
    char title[50];
    char author[50];

    printf("Enter the title of the book: ");
    // fgets(title, sizeof(title), stdin);
    scanf("%s", &title);
    strcpy(books[bookCount], title);

    printf("Enter the author of the book: ");
    // fgets(author, sizeof(author), stdin);
    scanf("%s", &author);
    strcpy(authors[bookCount], author);
    
    printf("Book added successfully!\n");
    bookCount+=1;

}

void display_book()           
{
   
    if(bookCount==0){
        printf("Sorry! No books available in library...\n");
    }
    else{

        printf("\nAvailable books are:\n");

        printf("\n=======================================================================\n");
        printf("Title\t\t\t\t\t Author");
        printf("\n=======================================================================\n");



        for (int i = 0; i < bookCount; i++)
        {
            printf("%s\t\t\t\t%s", books[i], authors[i]);
            printf("\n");
        }
        printf("=======================================================================\n");
    }


}

void borrow_book()      
{   
    int access = 0, access1=0;
    char borrow[20];
    
    printf("Enter the title of the book you want to borrow: ");
    scanf("%s", &borrow);
    // printf("From %d books, ", bookCount);
   for (int i=0; i<bookCount; i++)
   {    
        if(strcmp(borrow, books[i]) == 0)
        {      
            printf("You have borrowed '%s' book which author name is %s\n",books[i],authors[i]);
            
            for (int j=0; j<3;j++)
            {
                if (strcmp(borrow_list_books[j], "")==0)
                {
                    strcpy(borrow_list_books[j], books[i]);
                    strcpy(borrow_list_authors[j], authors[i]);
                    break;
                }
                if (strcmp(borrow_list_books[j], "")!=0 && j==2)
                {
                    printf("\nSorry! Lot's of books are borrow! After return those books tri to borrow \n");
                }
                
                
            }
            bookCount-=1;
            // printf("%d\n",i);
            books[i][50]='\0';
            authors[i][50]='\0';
            // printf("%s in borrow_list_book\n", borrow_list_books[i]);
            // // printf("%s removing.. from books[%d]\n", borrow, i);
            // for(int j = 0; j<bookCount; j++)
            //     {
            //         printf("books[%d] is %s\n", j, books[j]);
            //     }                
            access=1;  
            goto checking;     
            // }     
        }  
        // printf("\nbooks[%d] , is not %s ", i, borrow); 
   }
    for (int i = 0; i < 3; i++)
    {
        // printf("%s %s\n",borrow_list_books[j], borrow);
       if (strcmp(borrow_list_books[i],borrow)==0)
       {
        printf("%s book already borrow\n", borrow);
        access1=1;
       }
       
    }
     
    checking :
        if (access==0 && access1==0)
        {
            printf("No '%s' book available for borrow... \n", borrow);
        }
   
}

void return_book()
{
    char return_borrow[20];
    printf("Enter the title of the book you want to return: ");
    scanf("%s",&return_borrow);
    for (int j = 0; j < 3; j++)
    {
        if (strcmp(borrow_list_books[j],return_borrow)==0)
        {
            // for (int i = 0; i < bookCount; i++)
            // {
                //  if (strcmp(books[i],"")==0)
                //  {
            strcpy(books[0],borrow_list_books[j]);
            strcpy(authors[0],borrow_list_authors[j]);
                    
            // borrow_list_books[j][50]='\0';
            // borrow_list_authors[j][50]='\0';
                    
                //  }
            // }
            
            printf("\nYou have successfully returned '%s' book\n",borrow_list_books[j]);
            // printf("\n'%s' book found in borrow_list_books[%d]\n",borrow_list_books[j],j);
            break;
        }
        else if(strcmp(borrow_list_books[j],return_borrow)!=0 && j==2)
        {
            printf("\nNo '%s' book found for return.\n",return_borrow);
            
        }
        
        
    }
    

    

}

// starts here
void search_by_title()
{
    char search_title[50];
    int found = 0;

    printf("Enter the title of the book you want to search for: ");
    scanf("%s", search_title);

    printf("\nSearch results for '%s':\n", search_title);
    printf("=======================================================================\n");
    printf("Title\t\t\t\t\t Author");
    printf("\n=======================================================================\n");

    for (int i = 0; i < bookCount; i++)
    {
        if (strstr(books[i], search_title) != NULL)
        {
            printf("%s\t\t\t\t%s\n", books[i], authors[i]);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No books found with title '%s'.\n", search_title);
    }
    printf("=======================================================================\n");
}

// using switch cases instead of else if statements
int main()
{
    int task;

    printf("\n******** Project 03 -  Library Management System ********\n");
    printf("1- Add New Book\n");
    printf("2- Display Available Books\n");
    printf("3- Borrow Book\n");
    printf("4- Return Book\n");
    printf("5- Search books by title\n");
    printf("0- Exit\n\n");

    do
    {
        printf("\nPlease Enter The choice : ");
        scanf("%d", &task);

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
        case 5:
            search_by_title();
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please enter valid task number (0 to 6).\n");
            break;
        }

    } while (task != 0);

    printf("You have exited the library management system.\n");

    return 0;
}