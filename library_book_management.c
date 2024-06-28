#include <stdio.h>
#include <string.h>

/*All globle variable*/
 
char books[10][50];
char authors[10][50];
char borrow_list_books[10][50];
char borrow_list_authors[10][50];

int Available_book = 0;
int Borrowed_book = 0;
    

/*function declearation*/
void add_book();     
void display_book();     
void borrow_book();     
void return_book();     
void search_title();     



void add_book()           
{
    
    char title[50];
    char author[50];

    printf("Enter the title of the book: ");
    // fgets(title, sizeof(title), stdin);
    gets(title);
    // scanf("%[^\n]", &title);
    strcpy(books[Available_book], title);

    printf("Enter the author of the book: ");
    gets(author);
    // fgets(author, sizeof(author), stdin);
    // scanf("%[^\n]", &author);
    strcpy(authors[Available_book], author);
    
    printf("Book added successfully!\n");
    Available_book+=1;
    

}

void display_book()           
{
   
    if(Available_book==0){
        printf("Sorry! No books available in library...\n");
    }
    else{

        printf("\nAvailable books are:\n");

        printf("\n=======================================================================\n");
        printf("Title\t\t\t\t\t Author");
        printf("\n=======================================================================\n");



        for (int i = 0; i < Available_book; i++)
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

    // temp array for restore 
    char books
    
    printf("Enter the title of the book you want to borrow: ");
    gets(borrow);
   for (int i=0; i<Available_book; i++)
   {    
        if(strcmp(books[i], borrow) == 0)
        {   
            Borrowed_book+=1;
            for (int j=0; j<Borrowed_book;j++)
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
            printf("You have borrowed '%s' book which author name is %s\n",books[i],authors[i]);


            Available_book-=1;
            
            // books[i][50]='\0';
            // authors[i][50]='\0'; 
                    
            access=1;  
            goto checking;     
            // }     
        }  
        else{

        }
   }
    for (int i = 0; i < 3; i++)
    {
        // printf("%s %s\n",borrow_list_books[j], borrow);
       if (strcmp(borrow_list_books[i],borrow)==0)
       {
        printf("%s book already borrow\n", borrow);
        access1=1;
        break;  
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
    gets(return_borrow);
    for (int j = 0; j < 3; j++)
    {
        if (strcmp(borrow_list_books[j],return_borrow)==0)
        {
           
                    strcpy(books[0],borrow_list_books[j]);
                    strcpy(authors[0],borrow_list_authors[j]);
                            
                    borrow_list_books[j][50]='\0';
                    borrow_list_authors[j][50]='\0';
                    
           for (

           )
            
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

    printf("\nPlease Enter The choice : ");
    scanf("%d", &task);
    getchar();

    if (task==1)
    {
        add_book();
        
    }
    else if (task==2)
    {
        printf("Available books are: %d\n",Available_book);
        printf("Borrow books are: %d\n\n",Borrowed_book);
        display_book();
        
    }
    else if (task==3)
    {
        borrow_book();
    }
    else if (task==4)
    {
        return_book(); 
    }
    else if (task==5)
    {
        search_title();
    }
    else if (task==6)
    {printf("\nThease books are in borrow: \n");
        for(int j = 0; j<5; j++)
                {
                    
                    printf("borrow_list_books[%d] is %s\n", j, borrow_list_books[j]);
                }    
    }
    else
    {
        printf("Please enter valid task no (task 0 to 5)\n\n");
    }


} while (task!=0);

printf("You have left this project....\n\n");

    return 0;
}