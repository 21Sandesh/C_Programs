#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct database
{
    char name[15];
    int rollno;
    float marks;
}s;
void write()
{
    FILE *file;
    file = fopen("Studentdatabase.txt","w");
    if(file == NULL)
    {
        printf("\tCan't Open the file");
        getch();
        exit(1);
    }
    printf("Enter the");
    while;
}
