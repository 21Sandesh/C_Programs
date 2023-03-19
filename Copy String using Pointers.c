#include<stdio.h>
int main()
{
    char *arrp[20],arr[20],copy[20],n;
    printf("Enter the String: ");
    scanf("%s",arr);
    for(n=0;n<20;n++)
    {
        arrp[n] = &arr[n];
        copy[n] = *arrp[n];
    }
    printf("Copied String is: %s",copy);
    return 0;
}
