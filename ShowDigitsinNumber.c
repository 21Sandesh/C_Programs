#include<stdio.h>
int main()
{
    int o=1,m=1,n,i=1,j=1,k,disp[100];
    printf("Enter the Number: ");
    scanf("%d",&n);
    i=10;
    do
    {
        k = k/i;
        i = i*10;
        j++;
    } while (k==0);
    printf("The Number Entered is %d Digit Number",j);
    for(i=1;i<=j;i++)
    {
        m=m*10;
    }
    disp[0]=0;
    for(i=1;i<=j;i++)
    for(k=10;k<=m;k++)
    {
        disp[i]= ((n%k)-disp[(i-1)])/(k/10) ;
    }
    for(i=1;i<=j;i++)
    {
        printf("\n %d",disp[i]);
    }
    return 0;
}