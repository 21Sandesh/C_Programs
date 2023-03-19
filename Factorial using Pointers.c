#include<stdio.h>
int main()
{
    int n,*pn,fact=1,*pfact;
    printf("Enter the Number: ");
    scanf("%d",&n);
    pn = &n;
    pfact = &fact;
    for(n=n;n>0;n--)
    {
        fact = (*pfact)*(*pn);
    }
    printf("\nFactorial is: %d",fact);
    printf("\nAddress: %p",pfact);
    return 0;
}
