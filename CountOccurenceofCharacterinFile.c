#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input,counter=0;
    FILE *file;
    char c,s;
    while(1)
    {
    printf("Enter\n1. Write\n2. Count Occurrence of a Characters\n");
    scanf("%d",&input);
    switch(input)
    {
    case 1:
        {
            write();
            break;
        }
    case 2:
        {
            file = fopen("prajwal.txt","a");
            if(file == NULL)
            {
                printf("Can't Open the File");
                getch();
                exit(1);
            }
            printf("Enter the Required Character: ");
            scanf("%s",&s);
            do
            {
                c = fgetc(file);
                printf("%c",c);
                if(c == s)
                {
                    counter++;
                }
            }
            while(c != EOF);
            fclose(file);
            printf("\nThe file contains '%d' '%c' Character\n",counter,s);
            break;
        }
        printf("Press: ");
        getch();
        system("cls");
    }
    }
}
void write()
{
    FILE *file;
    char str[30];
    file = fopen("prajwal.txt","a");
    if(file == NULL)
    {
        printf("Can't Open the File");
        getch();
        exit(1);
    }
    printf("Enter the String: ");
    fflush(stdin);
    fgets(str, sizeof(str), stdin);
    fclose(file);
}
