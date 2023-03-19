#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[10],c;
    printf("Enter the String: ");
    fflush(stdin);
    gets(str);
    i = strlen(str);
    printf("The Length of String is: %d",i);
    return 0;
}
