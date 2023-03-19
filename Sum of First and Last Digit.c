#include<stdio.h>
int main()
{
    int n,a,b=1,counter=0,i,first,last,sum;
    printf("Enter the Number: ");
    scanf("%d",&n);
    a=n;
    do
    {
        i = n/10;
        counter++;
        n=i;
    }
    while(i!=0);
    for(n=0;n<(counter-1); n++)
    {
        b = b*10;
    }
    first = a/b;
    last = a%10;
    sum = first+last;
    printf("The Sum of First and Last Digits is: %d",sum);
    return 0;
}
