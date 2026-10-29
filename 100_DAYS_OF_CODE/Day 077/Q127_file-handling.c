/* Q127: Write a program that reads text from input.txt, converts all lowercase 
letters to uppercase, and writes the result to output.txt. */

#include <stdio.h>

int main()
{
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL)
    {
        printf("Input file not found!");
        return 1;
    }

    while ((ch = fgetc(input)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully.");

return 0;
}