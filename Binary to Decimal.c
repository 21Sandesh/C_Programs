#include<stdio.h>
int main()
{
    int n,num=0,i=0,j,k,m,disp[100];
    printf("Enter the Required Number: ");
    scanf("%d",&n);
    k=n;
    do
    {
        k = k/10;
        i++;
    }
    while(k>0);
    k=1;
    for(j=1;j<=i;j++)
    {
        k = k*10;
    }
    disp[0]=0;
    m=1;
    for(j=1;j<=i;j++)
    {
        disp[j] = ((n%(m*10))-disp[(j-1)])/m;
        m = m*10;
    }
    m=0;
    for(j=1;j<=i;j++)
    {
        if(disp[j]<=1)
        {
            num=0;
            n=1;
            for(j=1;j<=i;j++)
            {
                num = num+(disp[j]*n);
                n = n*2;
            }
        }
        else
        {
            m++;
        }
    }
    if(m==0)
    {
        printf("\nDecimal Conversion of the Binary Number is: %d",num);
    }
    else
    {
        printf("\nPlease Enter a Binary Number");
    }
    return 0;
}
