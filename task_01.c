#include<stdio.h>
void main()
{
    char title[50];
    char name[50];
    printf("Enter the title of book: ");
    fgets(title, sizeof(title), stdin);

    printf("Enter author of book: ");
    fgets(name, sizeof(name), stdin);

    printf("\nBook Added Successfully!\n\n");
    
}