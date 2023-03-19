#include<stdio.h>
int main()
{
    int i=0,j,s;
    char str[50],rev[50];
    printf("Enter the String: ");
    scanf("%s",&str);
    while(1)
    {
        if(str[i]=='\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    s=i;
    i=0;
    printf("Reversed String is: ");
    for(j=(s);j>=0;j--)
    {
        rev[i] = str[j];
        printf("%c",rev[i]);
        i++;
    }
    return 0;
}
