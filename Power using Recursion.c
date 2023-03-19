#include<stdio.h>
int power(int base, int pow)
{
    int num;
    num = base;
    while(pow>1)
    {
        num = num*base;
        pow--;
    }
    return num;
}
int main()
{
    int base, pow, num;
    printf("Enter the Number: ");
    scanf("%d",&base);
    printf("Enter Power:      ");
    scanf("%d",&pow);
    num = power(base, pow);
    printf("%d raise to %d is: %d",base,pow,num);
    return 0;
}
