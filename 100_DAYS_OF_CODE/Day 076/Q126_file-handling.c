/* Q126: Ask the user for a filename. Check if it exists by trying to open it in 
read mode. If the file pointer is NULL, print an error message; otherwise, read and 
display its content. */

#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char str[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File does not exist!");
        return 1;
    }

    printf("File opened successfully.\n");

    while (fgets(str, 200, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

return 0;
}