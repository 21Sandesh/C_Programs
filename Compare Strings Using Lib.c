#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char first[50],second[50];
    printf("Enter First String: ");
    scanf("%s",&first);
    printf("Enter Second String: ");
    scanf("%s",&second);
    i = strcmp(first,second);
    if(i==0)
    {
        printf("The two Strings are Equal");
    }
    else
    {
        printf("The two Strings are not Equal");
    }
    return 0;
}
