#include<stdio.h>
int main()
{
    int e[10],o[10],n,i=0,j=0,m,even=0,odd=1;
    printf("Enter the Numbers: ");
    scanf("%d",&n);
    while(n>=0)
    {
        if(n%2==0)
            {
                e[i] = n;
                i++;
            }
        else
            {
                o[j] = n;
                j++;
            }
            scanf("%d",&n);
    }
    m = i;
    for(i=0;i<m;i++)
    {
        even = even+e[i];
    }
    i = j;
    for(j=0;j<i;j++)
    {
        odd = odd*o[j];
    }
    printf("Sum of Even Numbers Entered is: %d\n",even);
    printf("Product of Odd Numbers Entered is %d\n",odd);
    return 0;
}
