#include<stdio.h>
int a,b;
int mult(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*mult(a-1);
    }
}
int main()
{
    float sol;
    printf("Enter the Number: ");
    scanf("%d",&a);
    sol = mult(a);
    printf("Factorial is: %.2f",sol);
    return 0;
}
