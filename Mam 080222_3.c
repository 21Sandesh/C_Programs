#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
void read();
void write();
struct record
{
  char name[30];
  int id;
  float sal;
}s;
int main()
{
int ch,input;
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
            {write();
            break;}
            case 2:
            {read();
            break;}
            case 3:
            {exit(1);}
            default:
            {printf("\n\tOption not Available\n");
            break;}
            printf("Enter any number to Clear Screen: ");
        scanf("%d",&input);
        system("cls");
        }
    }
getch();
}
void write()
{
int i,n=0;
FILE *fp;
    fp=fopen("stu.dat","wb");
    if(fp==NULL)
    {
        printf("can't create file");
        getch();
        exit(1);
    }
    printf("\n\tHow Many Records You Want to Enter:=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee ID := ");
        scanf("%d",&s.id);
        printf("\nEnter Employee Name := ");
        scanf("%s",s.name);
        fflush(stdin);
        printf("\nEnter the Salary:=");
        scanf("%f",&s.sal);
        printf("\n*******\n");
        fwrite(&s,sizeof(s),1,fp);
    }
fclose(fp);
}
void read()
{
FILE *fp;
    fp=fopen("stu.dat","rb");
    if(fp==NULL)
    {
        printf("can't read file");
        getch();
        exit(1);
    }
        while(fread(&s,sizeof(s),1,fp)==1)
        {
            printf("\nEmployee ID := %d",s.id);
            printf("\nEmployee Name := %s",s.name);
            fflush(stdin);
            printf("\nSalary:= %f",s.sal);
            printf("\n********\n");
        }
fclose(fp);
}
