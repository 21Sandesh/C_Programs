#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void write();
void read();
void del();
struct record
{
    char name[30];
    int id;
    float marks;
}s;
void main()
{
    int input;
    while(1)
    {
        printf("Enter the Operation to be Performed: \n");
        printf("\t1.Write\n\t2.Read\n\t3.Exit\nINPUT: ");
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
                read();
                break;
            }
        case 3:
            {
                exit(1);
                break;
            }
        case 4:
            {
                del();
                break;
            }
        default :
            {
                printf("Incorrect Input\n");
                break;
            }
        }
        printf("Enter any number to Clear Screen: ");
        scanf("%d",&input);
        system("cls");
    }
}
void write()
{
    int n;
    FILE *file;
    file = fopen("student.txt","a");
    if(file==NULL)
    {
        printf("Cannot open the File");
        exit(1);
    }
    printf("\tRecord(s) to be added: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter Student ID: ");
        scanf("%d",&s.id);
        printf("Enter Student Name: ");
        scanf("%s",&s.name);
        printf("Enter Total Marks Obtained: ");
        scanf("%f",&s.marks);
    }
    fclose(file);
}
void read()
{
    FILE *file;
    file = fopen("student.txt","r");
    if(file==NULL)
    {
        printf("can't read file");
        getch();
        exit(1);
    }
        while(fread(&s,sizeof(s),1,file)==1)
        {
            printf("\nStudent ID : %d",s.id);
            printf("\nStudent Name: %s",s.name);
            fflush(stdin);
            printf("\nMarks Obtained: %f",s.marks);
            printf("\n********\n");
        }
fclose(file);
}
void del()
{
    int eid;
    FILE *file,*fp1;
    file=fopen("student.dat","rb");
    fp1=fopen("student1.dat","wb");
    if(file==NULL)
    {
        printf("can't read file");
        getch();
        exit(1);
    }
    if(fp1==NULL)
    {
        printf("can't write file");
        getch();
        exit(1);
    }
    printf("\nEnter Employee ID to delete:= ");
        scanf("%d",&eid);
        while(fread(&s,sizeof(s),1,file)==1)
        {
            if (eid!=s.id)
            {
                fwrite(&s,sizeof(s),1,fp1);
            }
        }
        rename("stu1.dat","stu.dat");
fclose(file);
fclose(fp1);
}

