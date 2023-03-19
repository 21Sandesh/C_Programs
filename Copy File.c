#include<stdio.h>
#include<stdlib.h>
void write();
void read();
void copy();
int main()
{
    int n;
    char c,name[50];
    FILE *file,*filecpy;
    printf("Enter Input: \n1.Write\n2.Read\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            write();
        }
    case 2:
        {
            read();
        }
    case 3:
        {
            copy();
        }
        scanf("%d",&n);
        system("cls");
    }
    return 0;
}
void read()
{
    FILE *file;
    file = fopen("exp1.dat","r");
    if(file==NULL)
    {
        printf("Cannot Open File");
        exit(0);
    }
}
void write()
{
    int n;
    FILE *file;
    file = fopen("exp1.dat","r");
    if(file==NULL)
    {
        printf("Cannot open File");
        exit(0);
    }
    printf("\n\tHow Many Records You Want to Enter:=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&n);
    }
}
void copy()
{
    char c;
    FILE *file, *filecpy;
    file = fopen("exp1.dat","a");
        if(file==NULL)
        {
            printf("Can't open File");
            exit(0);
        }
    filecpy = fopen("exp1cpy.dat","a");
        c = fgetc(file);
        while(c!=EOF)
        {
            fputc(c,filecpy);
            c = fgetc(file);
        }
        printf("Contents Copied to %s Succefully","exp1.dat");
    fclose(file);
    fclose(filecpy);
}
