#include<stdio.h>
int main()
{
    int n,num,i=0,j,k,m,disp[100];
    printf("Enter the Required Number: ");
    scanf("%d",&n);
    k=n;
    do
    {
        k = k/10;
        i++;
    }
    while(k>0);
    printf("Entered Number is %d Digit Number",i);
    k=1;
    for(j=1;j<=i;j++)
    {
        k = k*10;
    }
    disp[0]=0;
    m=1;
    printf("\nThe Face Value is as Follows: ");
    for(j=1;j<=i;j++)
    {
        disp[j] = ((n%(m*10))-disp[(j-1)])/m;
        printf("\t %d",disp[j]);
        m = m*10;
    }
    num=0;
    for(j=1;j<=i;j++)
    {
        m = m/10;
        num = num+((disp[j])*m);
    }
    if(num==n)
    {
        printf("\n%d is a Palindrome Number",n);
    }
    else
    {
        printf("\n%d is not a Palindrome Number",n);
    }
    return 0;
}
