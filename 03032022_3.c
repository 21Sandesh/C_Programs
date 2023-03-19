#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
/*void main()
{  int i, sum2=0;
  FILE *f2;
  /* open files */
  //f2 = fopen("int_data.txt","w");
  /* write integers to files in binary and text format*/
/*for(i=10;i<15;i++) fprintf(f2,"%d\n",i);
fclose(f2);
f2 = fopen("int_data.txt","r");
while(fscanf(f2,"%d",&i)!=EOF)
    {
        sum2+=i; printf("text file: i=%d\n",i);
    } /*end while fscanf*/
/*  printf("text sum=%d\n",sum2);
  fclose(f2);
}*/
void read();
void write();
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
        printf("Press any Key to Clear The Screen: ");
        getch();
        system("cls");
    }
getch();
}
void write()
{
int i,n=0;
FILE *file;
    file=fopen("stu.dat","a");
    if(file==NULL)
    {
        printf("Can't Create file");
        getch();
        exit(1);
    }
    printf("\n\tEnter the Number of Records to be Entered: ");
    scanf("%d",&n);
    while(fscanf(file,"%d",s.id)!= EOF)
    {
        printf("\nEnter Student ID : ");
        scanf("%d",&s.id);
        printf("\nEnter Student Name : ");
        scanf("%s",s.name);
        fflush(stdin);
        printf("\nEnter the Total Marks: ");
        scanf("%f",&s.marks);
        printf("\n\t\t\t*******\n");
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
        printf("Can't the read file");
        getch();
        //system("cls");
        exit(1);
    }
        while(fread(&s,sizeof(s),1,file)==1)
        {
            fprintf(file,"\nStudent ID : %d",s.id);
            fprintf(file,"\nStudent Name : %s",s.name);
            fflush(stdin);
            fprintf(file,"\nMarks: %f",s.marks);
            printf("\n\t\t\t********\n");
        }
fclose(file);
}
