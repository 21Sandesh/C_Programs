#include<stdio.h>
int main()
{
    int i=0,j=0,s,r=0;
    char first[50],second[50],merge[100];
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
    printf("The Merged String is: /n");
    for(s=0;s<i;s++)
    {
        merge[s] = first[s];
        printf("%c",merge[s]);
    }
    for(s=i;s<(i+j);s++)
    {
        merge[s] = second[r];
        r++;
        printf("%c",merge[s]);
    }
    return 0;
}
