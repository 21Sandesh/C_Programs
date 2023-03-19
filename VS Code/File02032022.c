#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stud
{
    int id;
    char name[15];
    float marks;
}s;
void write()
{
    FILE *file;
    int *entriesp,entries;
    file = fopen("file02032022.txt","a");
    if(file==NULL)
    {
        printf("Can't Open the File");
        getch();
        exit(1);
    }
    printf("Enter the Number of Entries: ");
    scanf("%d",&entries);
    while(entries>0)
    {
        printf("Enter Student ID: ");
        scanf("%d",&s.id);
        //fflush(stdin);
        printf("Enter Student Name: ");
        scanf("%s",&s.name);
        printf("Enter Marks: ");
        scanf("%f",&s.marks);
        printf("---Data Saved Successfully--");
        entries--;
    }
    fclose(file);
}
void read()
{
    FILE *file;
    file = fopen("file02032022.txt","r");
    if(file == NULL)
    {
        printf("File does not Exist");
        getch();
        exit(1);
    }
    while(fread(&s,sizeof(s),1,file) == 1)
    {
        printf("Name of Student: %s",s.name);
        printf("Roll No: %d",s.id);
        printf("Marks: %d",s.marks);
        printf("________________________");
    }
    fclose(file);
}
int main()
{
    FILE *file;
    int n;
    while(1)
    {
    printf("Enter \n\t1.Write\n\t2.Read\n\t3.Exit\nINPUT: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            write();
            printf("Press any key Clear Screen");
            getch();
            system("cls");
            break;
        }
    case 2:
        {
            read();
            printf("Press any key Clear Screen");
            getch();
            system("cls");
            break;
        }
    case 3:
        {
            exit(1);
        }
    default :
        {
            printf("Enter Valid Input");
        }
    }
    }
    return 0;
}