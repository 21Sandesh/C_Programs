#include<stdio.h>
int main()
{
    int n,rem[30],m,a=0;
    printf("Enter the Decimal Number: ");
    scanf("%d",&n);
    do
    {
        rem[a] = (n%2);
        a++;
        n = n/2;
    }
    while(n>0);
    printf("\nThe Binary Conversion of the Number is: ");
    for(m=0;m<a;m++)
    {
        printf("%d",rem[m]);
    }
    return 0;
}
