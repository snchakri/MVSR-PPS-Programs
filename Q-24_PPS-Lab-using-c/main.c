#include <stdio.h>
#include <stdlib.h>

/*
    This directory consists of
        1. "main.c" - c file which executes the task of copying from source file to target file
        2. "sourcefile.txt" - source file of text-extension
        3. "targetfile.txt" - target file of text-extension
*/

int main()  {
    FILE *fp_source, *fp_target;
    fp_source = fopen("sourcefile.txt","r");
    fp_target = fopen("targetfile.txt","a");

    if (fp_source == NULL || fp_target == NULL)     {
        printf("\nERROR: FAILED TO PERFORM TASK\nPlease check if sourcefile.txt is existing in same directory\n");
        exit(0);
    }
    
    char c;
    while ((c = fgetc(fp_source)) != EOF)
        fputc(c,fp_target);
    printf("\nContents of file copied successfully!\n");

    fclose(fp_source);
    fclose(fp_target);

    return 0;
}
