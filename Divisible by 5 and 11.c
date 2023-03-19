#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("Enter the Number: ");
    scanf("%d",&n);
    if(n%5==0 && n%11==0)
    {
        printf("Number is Divisible by both 5 and 11\n");
    }
    else
    {
        printf("Number is not Divisible by 5 and 11\n");
    }
    }
    return 0;
}
