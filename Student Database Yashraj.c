#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
void read();
void write();
struct record
{
  char name[30];
  int id;
  float marks;
}s;
int main()
{
int ch;
    while(1)
    {
        printf("\n1:Write Records");
        printf("\n2:Read Records");
        printf("\n3:Exit");
        printf("\n\tEnter Your Choice:- ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            write();
            break;
            case 2:
            read();
            break;
            case 3:
            exit(1);
            default:
            printf("\n\t\tEnter Valid Input\n");
            break;
        }
    }
getch();
}
void write()
{
int i,n=0;
FILE *file;
    file=fopen("stu.dat","wb");
    if(file==NULL)
    {
        printf("can't create file");
        getch();
        exit(1);
    }
    printf("\n\tHow Many Records You Want to Enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Student ID : ");
        scanf("%d",&s.id);
        printf("\nEnter Student Name : ");
        scanf("%s",s.name);
        printf("\nEnter Marks: ");
        scanf("%f",&s.marks);
        fwrite(&s,sizeof(s),1,file);
    }
fclose(file);
}
void read()
{
FILE *file;
    file=fopen("stu.dat","rb");
    if(file==NULL)
    {
        printf("can't read file");
        getch();
        exit(1);
    }
        while(fread(&s,sizeof(s),1,file)==1)
        {
            printf("\nStudent ID : %d",s.id);
            printf("\nStudent Name : %s",s.name);
            printf("\nMarks: %f",s.marks);
            printf("\n\t\t*********\n");
        }
fclose(file);
}
