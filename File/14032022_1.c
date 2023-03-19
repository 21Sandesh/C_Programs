#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void read();
void write();
int main()
{
    FILE *file;
    int input;
    file = fopen("14032022_exp1.txt","w");
    while(1)
    {
        printf("1. Write\n2. Read\n3. Calculate Occurences\n");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            {
                write();
            }break;
        case 2:
            {
                read();
            }break;
        case 3:
            {

            }
        }
        printf("Press : ");
        getch();
        system("cls");
    }

    return 0;
}
void write()
{
    FILE *file;
    char str[20];
    file == fopen("14032022_exp1.txt","a");
    if(file == NULL)
    {
        printf("Can't Open File");
        getch();
        exit(1);
    }
    printf("Enter String: ");
    scanf("%s",str);
    fprintf(file,"%s",&str);
    fclose(file);

}
void read()
{
    FILE *file;
    char c,str;
    file = fopen("14032022_exp1.txt","r");
    if(file == NULL)
    {
        printf("Can't Read File");
        getch();
        exit(1);
    }
    //c = fgetc(str);
    while(fscanf(file, "%s", str)!= EOF)
    {
        printf("%s");
    }
    fclose(file);
}
