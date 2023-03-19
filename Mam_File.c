#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void read();
void write();
void del();
struct record
{
  char name[30];
  int id;
  float marks;
}s;
 void main()
{
int ch;
    while(1)
    {
        printf("\n1:Write Records");
        printf("\n2:Read Records");
        printf("\n3:Exit\n");
        printf("\n\tEnter Your Choice: ");
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
            printf("\n\Enter Valid Input\n");
            break;
        }
        printf("Enter any number to clear The Screen: ");
        scanf("%d",&ch);
        system("cls");
    }
getch();
}
void write()
{
int i,n=0;
FILE *fp;
    fp=fopen("stu.dat","a");
    if(fp==NULL)
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
        fflush(stdin);
        printf("\nEnter the Total Marks: ");
        scanf("%f",&s.marks);
        printf("\n\t\t\t*******\n");
        fwrite(&s,sizeof(s),1,fp);
    }
fclose(fp);
}
void read()
{
FILE *fp;
    fp=fopen("stu.dat","r");
    if(fp==NULL)
    {
        printf("can't read file");
        getch();
        //system("cls");
        exit(1);
    }
        while(fread(&s,sizeof(s),1,fp)==1)
        {
            printf("\nStudent ID : %d",s.id);
            printf("\nStudent Name : %s",s.name);
            fflush(stdin);
            printf("\nMarks: %f",s.marks);
            printf("\n\t\t\t********\n");
        }
fclose(fp);
}
