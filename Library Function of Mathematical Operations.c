#include<stdio.h>
float add( float x, float y);
float sub( float x, float y);
float mult( float x, float y);
float div(float x, float y);
int main()
{
    float a,b,m,n;
    char s;
    printf("Enter Two Numbers for Operations: ");
    scanf("%f %f",&a,&b);
    while(1)
    {
        printf("Enter the sign of operation to be Performed: ");
        scanf("%s",&s);

    if(s=='+')
    {
        m = add(a,b);
        printf("\nSum of %.3f , %.3f is: %f\n",a,b,m);
    }
    if(s=='-')
    {
        m = sub(a,b);
        printf("\nDifference of %.3f , %.3f is %f\n",a,b,m);
    }
    if(s=='*')
    {
        m = mult(a,b);
        printf("\nM<ultiplication of %.3f , %.3f is: %f\n",a,b,m);
    }
    if(s=='/')
    {
        m = div(a,b);
        printf("\nDivision of %.3f , %.3f is: %f\n",a,b,m);
    }
    if(s=='?')
    {
        break;
    }
    }
}
float add( float x , float y)
{
    float i;
    i = x+y;
    return(i);
}
float sub( float x , float y)
{
    float j;
    j = x-y;
    return(j);
}
float mult( float x, float y)
{
    float k;
    k = x*y;
    return(k);
}
float div( float x, float y)
{
    float l;
    l = x/y;
    return(l);
}
