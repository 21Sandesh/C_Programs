#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void read();
void write();
void del();
void editf();
struct record
{
  char name[30];
  int id;
  float marks;
}s;
 void main()
{
int S;
    while(1)
    {
        printf("Enter:\n\t1:Write Records\n\t2.Read Records");
        printf("\n\t3:Delete Records\n\t4:Edit Records");
        printf("\n\t5:Exit\n");
        printf("\nEnter the Operation to be Performed: ");
        scanf("%d",&S);
        switch(S)
        {
            case 1:
            write();
            break;
            case 2:
            read();
            break;
            case 3:
                {
                    del();
                    printf("Record Deleted Successfully!\n");
                    break;
                }
            break;
            case 4:
                {
                    editf();
                    printf("Record Edited Successfully!\n");
                    break;
                }
            case 5:
            exit(1);
            default:
            printf("\nEnter Valid Input\n");
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
    file=fopen("stu.txt","a");
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
        fflush(stdin);
        printf("\nEnter the Total Marks: ");
        scanf("%f",&s.marks);
        fwrite(&s,sizeof(s),1,file);
        printf("\n\t\t\t*******\n");
    }
fclose(file);
}
void read()
{
FILE *file;
int size;
    file=fopen("stu.txt","r");
    if(file==NULL)
    {
        printf("can't read file");
        getch();
        //system("cls");
        exit(1);
    }
    /*if (NULL != file)
    {
    fseek (file, 0, SEEK_END);
    size = ftell(file);
    if (0 == size)
    {
        printf("No Records Found!\n");
    }
    else
    {
        fseek(file, 0, SEEK_SET);
        while(fread(&s,sizeof(s),1,file)==1)
        {
            printf("\nStudent ID : %d",s.id);
            printf("\nStudent Name : %s",s.name);
            fflush(stdin);
            printf("\nMarks: %f",s.marks);
            printf("\n\t\t\t********\n");
        }
    }
    }*/
        while(fread(&s,sizeof(s),1,file)==1)
        {
            printf("\nStudent ID : %d",s.id);
            printf("\nStudent Name : %s",s.name);
            fflush(stdin);
            printf("\nMarks: %f",s.marks);
            printf("\n\t\t\t********\n");
        }
fclose(file);
}
void del()
{
    FILE *file,*file1;
    int n,counter=0,size;
    file=fopen("stu.txt","rb");
    file1=fopen("temp.txt","wb");
    if(file==NULL)
    {
        printf("can't read file");
        getch();
        //system("cls");
        exit(1);
    }
    if(file1==NULL)
    {
        printf("can't read file");
        getch();
        //system("cls");
        exit(1);
    }
    /*if (NULL != file)
    {
    fseek (file, 0, SEEK_END);
    size = ftell(file);
    if (0 == size)
    {
        printf("No Records Found!\n");
    }
    else
    {
        read();
    printf("Enter the id to Delete the respective Record: ");
    scanf("%d",&n);
    while(fread(&s,sizeof(s),1,file)==1)
    {
        if(n!=(s.id))
        {
            fwrite(&s,sizeof(s),1,file1);
        }
    }*/
    read();
    printf("Enter the id to Delete the respective Record: ");
    scanf("%d",&n);
    while(fread(&s,sizeof(s),1,file)==1)
    {
        if(n!=(s.id))
        {
            fwrite(&s,sizeof(s),1,file1);
        }
    }
    fclose(file);
    fclose(file1);
    remove("stu.txt");
    rename("temp.txt","stu.txt");
    //}
    //}
}
void editf()
{
    FILE *file,*file1;
    int n;
    file=fopen("stu.txt","rb");
    file1=fopen("temp.txt","wb");
    if(file==NULL)
    {
        printf("can't read file");
        getch();
        //system("cls");
        exit(1);
    }
    if(file1==NULL)
    {
        printf("can't read file");
        getch();
        //system("cls");
        exit(1);
    }
    read();
    printf("Enter the id to Edit the respective Record: ");
    scanf("%d",&n);
    while(fread(&s,sizeof(s),1,file)==1)
    {
        if(n!=(s.id))
        {
            fwrite(&s,sizeof(s),1,file1);
        }
        else
        {
            printf("Enter the Student id: ");
            scanf("%d",&s.id);
            printf("Enter Student Name: ");
            scanf("%s",s.name);
            fflush(stdin);
            printf("Enter Student Marks: ");
            scanf("%f",&s.marks);
            fwrite(&s,sizeof(s),1,file1);
        }
    }
    fclose(file);
    fclose(file1);
    remove("stu.txt");
    rename("temp.txt","stu.txt");
}
