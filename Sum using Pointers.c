#include<stdio.h>
int main()
{
    float a,*ap,b,*bp,s,*sp;
    printf("Enter the Numbers: ");
    scanf("%f",&a);
    scanf("%f",&b);
    ap = &a;
    bp = &b;
    s = (*ap)+(*bp);
    printf("Sum is: %f\n",s);
    printf("The Sum is Stored at: %d",&(*sp));
}
