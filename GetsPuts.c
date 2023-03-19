#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    FILE *file;
    char ch;

    //2
    file = fopen("temp.txt", "r");

    //3
    if (file == NULL)
    {
        printf("File is not available \n");
    }
    else
    {
        //4
        while ((ch = fgetc(file)) != EOF)
        {
            printf("%c", ch);
        }
    }

    //5
    fclose(file);

    return 0;
}
