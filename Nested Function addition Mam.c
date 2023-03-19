#include<stdio.h>
int var1, var2;
int addition(int x)
{
    //int sum;
    if(x==0)
        return 0;
    else
        return x+addition(x-1);
}
int main()
{
    int res;
    printf("Enter the Number: ");
    scanf("%d",&var1);
    res = addition(var1);
    printf("Output: %d",res);
    return 0;
}
