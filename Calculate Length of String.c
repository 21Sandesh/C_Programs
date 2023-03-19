#include<stdio.h>
int main()
{
    int i=0;
    char str[10],c;
    printf("Enter the String: ");
    scanf("%s",str);
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
    printf("Size of String is: %d",i);
    return 0;
}
