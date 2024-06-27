#include <stdio.h>
#include <string.h>

/*All globle variable*/
 
char books[10][50];
char authors[10][50];

int bookCount = 0;
    

/*function declearation*/
void add_book();     
void display_book();     



void add_book()           
{
    
    char title[50];
    char author[50];

    printf("Enter the title of the book: ");
    scanf("%s", &title);
    strcpy(books[bookCount], title);

    printf("Enter the author of the book: ");
    scanf("%s", &author);
    strcpy(authors[bookCount], author);
    
    printf("Book added successfully!\n");
    bookCount+=1;

}
void display_book()           
{
   
    

    printf("\nAvailable books are:\n");

    printf("\n=======================================================================\n");
    printf("Title\t\t\t\t\t Author");
    printf("\n=======================================================================\n");



    for (int i = 0; i <= bookCount; i++)
    {
        printf("%s\t\t\t\t%s", books[i], authors[i]);
        printf("\n");
    }
    printf("=======================================================================\n");
    printf("%d",bookCount);
    
    

}








int main ()
{
    int task;  

printf("\n******** Project 03 -  Library Management System ********\n");
printf("1- Add New Book\n");
printf("2- Display Available Books\n");
printf("3- Borrow Book\n");
printf("4- Return Book\n");
printf("5- Search Book by Author\n");
printf("0- Exit\n\n");
 
do
{
    task = 100;

    printf("Please Enter The choice : ");
    scanf("%d", &task);
    getchar();

    if (task==1)
    {
        add_book();
        
    }
    else if (task==2)
    {
        display_book();
        
    }
    else if (task==3)
    {
        printf("This is task 3\n");
    }
    else if (task==4)
    {
        printf("This is task 4\n");
    }
    else if (task==5)
    {
        printf("This is task 5\n");
    }
    else
    {
        printf("Please enter valid task no (task 0 to 5)\n\n");
        
    }


} while (task!=0);

printf("You have left this project....\n\n");

    return 0;
}