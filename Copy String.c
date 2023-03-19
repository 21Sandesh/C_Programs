#include<stdio.h>
int main()
{
    int i=0,j=0;
    char str[50],cpy[50];
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
    printf("The String is of %d Characters and is Copied as: ",i);
    for(j=0;j<i;j++)
    {
        cpy[j] = str[j];
        printf("%c",cpy[j]);
    }
    return 0;
}
