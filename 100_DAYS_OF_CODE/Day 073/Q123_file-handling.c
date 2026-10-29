/* Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines. */

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 1;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ' || ch == '\n')
        {
            words++;
        }

        if (ch == '\n')
        {
            lines++;
        }
    }

    words++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

return 0;
}