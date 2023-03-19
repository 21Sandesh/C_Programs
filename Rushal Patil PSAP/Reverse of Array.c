#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    char s1[100];
    printf (" \nEnter the string to be reversed: ");
    fflush(stdin);
    gets(s1);
    printf (" \n After the reverse of a string: %s ", strrev(s1));
    return 0;
}
