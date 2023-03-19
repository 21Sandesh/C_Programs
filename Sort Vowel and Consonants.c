#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s,str[50],consonant[50],vowel[50];
    int i,l,c,v;
    while(1)
    {
        c=0;
        v=0;
        printf("Enter the String: ");
        fflush(stdin);
        gets(str);
        l = strlen(str);
        for(i=0; i<l; i++)
        {
            if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u')
            {
                vowel[v] = str[i];
                v++;
            }
            else
            {
                consonant[c] = str[i];
                c++;
            }
        }
        printf("String Contains\n\t'%d' Vowel(s)\n\t'%d' Consonant(s)\n",v,c);
        printf("\nVowel(s) in the String are:      ");
        for(i=0; i<v; i++)
        {
            printf("%c\t",vowel[i]);
        }
        printf("\nConsonant(s) in the String are:  ");
        for(i=0; i<c; i++)
        {
            printf("%c\t",consonant[i]);
        }
        printf("\n\nEnter 0 to Clear Screen, Else Enter any Key\nINPUT: ");
        scanf("%c",&s);
        if(s=='0')
        {
            system("cls");
        }
    }
}
