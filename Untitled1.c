#include<stdio.h>
#include<stdlib.h>
struct file{
char name[10];
int Id;
}spk[5];
void write()
{
    FILE *file;
    file = fopen("EXP1_1.txt","w");
    for(int i=0;i<5;i++)
    {
        printf("Enter Name: \n");
        scanf("%s",spk[i].name);
        printf("Enter ID: \n");
        scanf("%d",spk[i].Id);
    }
    fclose(file);
}
void read()
{
    FILE *file;
    char name[10];
    file = fopen("EXP1_1.txt","r");
    fread(name,sizeof(name),1,file);
    for(int i=0;i<5;i++)
    {
        printf("Student Name: %s\n",spk[i].name);
        printf("Student ID: %d\n",spk[i].Id);
    }
    fclose(file);
}
int main()
{
    int i;
    while(1)
    {
        printf("Enter the Action\n1.Write\n2.Read\n");
        scanf("%d",&i);
    switch(i)
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
    }
    printf("Enter any number key");
    scanf("%d",&i);
    system("cls");
    }
    return 0;
}
