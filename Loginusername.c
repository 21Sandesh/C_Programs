#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
        int i,l,userlmain,input;
        char username[11] = "abc@xyz.com",user[20];
        while(1)
        {
            printf("\nEnter:\n\t1. Login\n\t2. Change Username");
            scanf("%d",&input);
            switch(input)
            {
            case 1:
                {
                    printf("|\tUser ID:  ");
                    fflush(stdin);
                    gets(user);
                    l = strlen(user);
                    if(l == 11)
                    {
                        i=0;
                        for(int a=0; a<11; a++)
                        {
                            if(user[a] == username[a])
                            {
                                i++;
                            }
                        }
                        if(i == 11)
                        {
                            printf("\n\t*Logged in Successfully!*\n");
                            printf("Press any key to Continue");
                            getch();
                            system("cls");
                        }
                        else
                        {
                            printf("\n\t*Invalid Credentials*\n");
                            printf("Press any key to Continue");
                            getch();
                            system("cls");
                        }
                    }
                    else
                    {
                        printf("\n\t*Invalid Credentials*\n");
                        printf("Press any key to Continue");
                        getch();
                        system("cls");
                    }
                }
            case 2:
                {

                }
            }
        }
}
