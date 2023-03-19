#include<stdio.h>
    struct exp1{
    char name[10];
    int Id;
    }asd[2];
    int main()
    {
        int i;
        asd[1].name="Sandesh1";
        asd[1].Id=1;
        /*for(i=0;i<=2;i++)
        {
            printf("Enter Name: ");
            scanf("%s",&asd[i].name);
            printf("Enter Id: ");
            scanf("%d",&asd[i].Id);
        }*/
        for(i=0;i<=2;i++)
        {
            printf("Name Entered: %s\n",asd[i].name);
            printf("Id Entered: %d\n",asd[i].Id);
        }
    }
