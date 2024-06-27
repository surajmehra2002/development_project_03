#include <stdio.h>
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
        printf("This is task 1\n");
    }
    else if (task==2)
    {
        printf("This is task 2\n");
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