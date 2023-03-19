#include<stdio.h>
int main()
{
    char S;
    for(int i=0;i<5;i++)
    {
        for(S=69;S>=(65+i);S--)
        {
            printf("%c\t",S);
        }
        printf("\n");
    }
    return 0;
}
