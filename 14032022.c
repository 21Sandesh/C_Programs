#include<stdio.h>
int main()
{
    int m=0;
    for(int i=1;i<=5; i++)
    {
        for(int j=5; j>(5-i); j--)
        {
            printf("%d\t",j);
        }
        for(int j=1;j<=(5-i);j++)
        {
            printf("%d\t",(5-i+1));
        }
        printf("\n");
    }
    return 0;
}
