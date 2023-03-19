#include<stdio.h>
#include<string.h>
int main()
{
    int counter=0,len,a=0;
    char str[30],s;

    printf("Enter the Character: ");
    scanf("%c",&s);
    len = strlen(str);
    while(a!=len)
    {
        if(str[a]== s)
        {
            counter++;
        }
        a++;
    }
    printf("The Character '%c' occurred '%d' Times in the Given String",s,counter);
    return 0;
}
