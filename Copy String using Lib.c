#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],cpy[50];
    printf("Enter the String: ");
    scanf("%s",&str);
    strcpy(cpy,str);
    printf("The Copied String is: %s",cpy);
    return 0;
}
