#include<stdio.h>
int average(int sum, int n)
{
    sum = (sum+n)/2;
    return sum;
}
int main()
{
    int i=-1,n[20],sum;
    printf("Enter the Numbers: ");
    do
    {
        i++;
        scanf("%d",&n[i]);
    }
    while(n[i-1]!=0)
}
