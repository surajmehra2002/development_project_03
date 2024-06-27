#include<stdio.h>
#include<string.h>
void main()
{
   char *titles[] = {
        "python",
        "c programming",
        "html"
    };
   char *authors[] = {
        "Suraj",
        "Manoj",
        "vimal"
    };



    printf("Available book: ");
    printf("\n=======================================================================\n");
    printf("Title\t\t\t\t\t Author");
    printf("\n=======================================================================\n");

    for (int i=0;i<5;i++)
    {
    printf("%s\t\t\t\t%s", titles[i], authors[i]);
    printf("\n=======================================================================\n");  
    }

   
}