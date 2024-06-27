
#include <stdio.h>
#include <string.h>
/*All globle variable*/
void main()           
    
        
{   
    char books[10][50]={"css", "js", "com"};
    printf("Before remove js: \n");
    for (int i=0; i<=3; i++)
    {
        printf("books[%d] is %s\n",i,books[i]);
    }
    // books[1][50]='\0';
    strcpy(books[1],"");

    printf("\nafter remove js: \n");
    for (int i=0; i<=3; i++)
    {
        printf("books[%d] is %s\n",i,books[i]);
    }   

}
