/*
    FILE OPERATIONS:
        1. Reading from file "textfile-1.txt"; note: file of this name and extension should exist in the same directory as of this program
        2. Writing to file "textfile-2.txt"; note: file of this name and extension will be created in same directory as of program, if it is already existing then it will be overwritten
        3. Appending to file "filetext-3.txt"; note: file of this name and extension is already existing in same directory as of program, it will be overwritten
*/

#include <stdio.h>
#include <stdlib.h>

void ReadFile()     {
    FILE *fp;
    fp = fopen("textfile-1.txt","r");

    if (fp != NULL)     {
        char file_data[1024*10];
        while (fgets(file_data, 1024*10, fp))
            printf("%s", file_data);
    }
    else
        printf("\nFile open action failed!\n");

    return;
}

void WriteFile()    {
    FILE *fp;
    fp = fopen("textfile-2.txt","w");

    if (fp != NULL)     {
        char string[1024*10+1];
        printf("\nEnter the info to be copied into file: \n");
        getchar();  //Removing input buffer by consuming over the new line from previous print
        fgets(string, 1024*10 - 1, stdin);
        fputs(string, fp);
    }
    else
        printf("\nFile open action failed!\n");
    
    return;
}

void AppendFile()   {
    FILE *fp;
    fp = fopen("textfile-3.txt","a");

    if (fp != NULL)     {
        char string[1024*10+1];
        printf("\nEnter the info to be copied into file: \n");
        getchar();  //Removing input buffer by consuming over the new line from previous print
        fgets(string, 1024*10 - 1, stdin);
        fputs(string, fp);
    }
    else
        printf("\nFile open action failed!\n");

    return;
}

int main()  {
    int menu;
    printf("\nChoose operation: \n1. Reading from file\n2. Writing to file\n3. Appending to file\nEnter choice: ");
    scanf("%d",&menu);

    switch (menu)   {
    case 1: ReadFile();
            break;
    
    case 2: WriteFile();
            break;

    case 3: AppendFile();
            break;
    
    default: printf("\nERROR: PLEASE ENTER ONLY FROM GIVEN VALUES");
             break;
    }


    return 0;
}
