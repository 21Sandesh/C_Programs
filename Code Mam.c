#include<stdio.h>
int addition();
int var1,var2,res;
int main()
{
    printf("Enter 1st Number: ");
    scanf("%d",&var1);
    printf("Enter 2nd Number: ");
    scanf("%d",&var2);
    res = addition();
    printf("Sum of two Numbers is: %d",res);
    return 0;
}
int addition()
{
    int sum;
    sum = var1+var2;
    return sum;
}
