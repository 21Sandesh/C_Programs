#include<stdio.h>
int main()
{
    int a,b,n1,n2;
    printf("Enter the First Non Negative Number: ");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("Enter the Second Non Negative Number: ");
        scanf("%d",&b);
        if(b>=0)
        {
            n1 = a%10;
            n2 = b%10;
            if(n1 == n2)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
