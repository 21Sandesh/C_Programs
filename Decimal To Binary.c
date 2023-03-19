#include<stdio.h>
int main()
{
    int n,rem=0,m,ans=0;
    printf("Enter the Decimal Number: ");
    scanf("%d",&n);
    m=1;
    do
    {
        rem = (n%2)*m;
        n = n/2;
        m = m*10;
        ans = ans+rem;
    }
    while(n>0);
    printf("\nThe Binary Conversion of the Number is: %d",ans);
    return 0;
}
