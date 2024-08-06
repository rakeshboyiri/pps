#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * file;
  

    char ch;
    int characters, words, lines;




    file = fopen("count.txt", "r");


    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        return 0;
    }

    characters = words = lines = 1;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n')
            lines++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n')
            words++;
    }

   
    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);


    /* Close files to release resources */
    fclose(file);

    return 0;
}