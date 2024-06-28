char returnbooktitle[20];
    int isthisourbook = 0; // check if this book part of library
    int isborrowed = 0;    // check if borrowed then only return
    char newborrowlist[5][20];
    int countnewborrowlist = 0;
    int temp = countborrowbook;
    int Isallcharacteraredigit;

    printf("Please Enter the Title of book you want to Return: ");
    scanf("%s", &returnbooktitle);

    Isallcharacteraredigit = verifyNumberInString(returnbooktitle); // all the character should not be digit
    if (Isallcharacteraredigit > 0)
    {
        errorcolor();
        printf("Please Enter Character only: \n");
        resetcolor();
    }
    else
    {

        for (int i = 0; i < temp; i++)
        {
            if (strcmp(borrowlist[i], returnbooktitle) == 0)
            {
                isborrowed++;
                countborrowbook--; // decrese the count from borrow list
            }
            else
            {
                strcpy(newborrowlist[countnewborrowlist], borrowlist[i]); // remove return item from array by adding new array
                countnewborrowlist++;
            }
        }
        if (isborrowed == 1)
        {
            SuccessColor();
            printf(" \nYou have successfully return with title : %s", returnbooktitle);
            resetcolor();

            for (int i = 0; i < 5; i++)
            {

                strcpy(borrowlist[i], "");
            }

            for (int i = 0; i < countnewborrowlist; i++)
            {

                strcpy(borrowlist[i], newborrowlist[i]); // recreate borrow list
            }

            resetcolor();
        }
        else
        {
            yellow();
            printf(" \nThe Book is not borrowed or not available in Library with title : %s", returnbooktitle);
            resetcolor();
        }
}
