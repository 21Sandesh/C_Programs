#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int len,a=0;
    while(1)
    {
        printf("Enter the String: ");
        gets(str);
        printf("Entered String: ");
        puts(str);
        len = strlen(str);
        while(a<len)
        {
            if(str[a] == 32)
            {
                a++;
            }
            if(str[a]<97)
            {
                str[a] = str[a]+32;
                a++;
            }
            if(str[a]>96 )
            {
                str[a] = str[a]-32;
                a++;
            }
        }
        printf("Inverted Case String: ");
        puts(str);
    }
    return 0;
}
