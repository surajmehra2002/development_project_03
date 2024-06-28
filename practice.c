#include <stdio.h>
#include <string.h>

int main()
{

char books[10][50] = {"suraj", "singh", "mehra"};

books[][10]='suraj';

for (int i = 0; i<3; i++)
{
    printf("%s\n", books[i]);
}

return 0;
 }