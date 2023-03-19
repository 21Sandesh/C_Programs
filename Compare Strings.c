#include<stdio.h>
int main()
{
    int i=0,j=0,r=0,s;
    char first[50],second[50];
    printf("Enter First String: ");
    scanf("%s",&first);
    printf("Enter Second String: ");
    scanf("%s",&second);
    while(1)
    {
        if(first[i]=='\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    while(2)
    {
        if(second[j]=='\0')
        {
            break;
        }
        else
        {
            j++;
        }
    }
    if(i==j)
    {
        for(s=0;s<i;s++)
        {
            if(first[s]==second[s])
            {
                r++;
            }
        }
        if(r>0)
        {
            printf("The Two Strings are Equal");
        }
        else
        {
            printf("The Two Strings are not Equal");
        }
    }
    else
    {
        printf("The Two Strings are not Equal");
    }
    return 0;
}
