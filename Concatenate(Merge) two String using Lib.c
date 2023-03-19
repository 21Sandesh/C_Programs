#include<stdio.h>
#include<string.h>
int main()
{
    char first[50],second[50],merge[100];
    printf("Enter the First String: ");
    scanf("%s",&first);
    printf("Enter the Second String: ");
    scanf("%s",&second);
    printf("The Combined String is: %s",strcat(first,second));
    return 0;
}
