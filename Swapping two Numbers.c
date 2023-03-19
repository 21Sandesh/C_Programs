#include<stdio.h>
int swap(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("\tSwapped Numbers are: %d\t%d\n",*a,*b);
}
int add(int *a, int *b)
{
    int s;
    s = (*a)+(*b);
    printf("\tAddition of the Given Numbers is: %d\n\n",s);
}
int main()
{
    int a,b;
    printf("\tEnter the Numbers: \n");
    scanf("%d %d",&a,&b);
    printf("\tNumbers Entered are: %d\t%d\n",a,b);
    swap(&a,&b);
    add(&a,&b);
    return 0;
}
