#include<stdio.h>
float square ( float x);
int main()
{
    float i,n;
    printf("\nEnter the Number for which Square is to be Taken: ");
    scanf("%f",&n);
    i = square( n ) ;
    printf("\n Square of %.3f is %.3f",n,i);
}
float square( float x )
{
    float j;
    j = x*x;
    return j;
}
