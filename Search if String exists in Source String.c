#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j=0,l,l1,counter,m=0;
    char str[50],str1[50];
    while(1)
    {
        counter = 0;
    printf("\nEnter the Source String: ");
    gets(str);
    l = strlen(str);
    printf("Enter the String to be Searched: ");
    gets(str1);
    l1 = strlen(str1);
    for(int i=0; i<=(l); i++)
    {
        if(str[i]==str1[0])
        {
            counter++;
            while(m!=l1)
            {
                i++;
                m++;
                if(str[i]==str1[m])
                {
                    counter++;
                }
                else
                {
                    counter = 0;
                    m = 0;
                }
            }
        }
    }
    if(counter == (l1))
    {
        printf("Entered String Exists in Source String\n\n");
    }
    else
    {
        printf("Entered String doesn't Exists in Source String\n\n");
    }
    fflush(stdin);
    /*printf("\nPress any Key to Clear Screen");
    getch();
    system("cls");*/
    }
}
