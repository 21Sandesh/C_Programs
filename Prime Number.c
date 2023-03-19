#include<stdio.h>
int main()
{
    int n,i,m,o=0,p=0,pf[100];
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\n1 is not a prime");
    }
    else
        {
            for(i=2;i<n;i++)
            {
                m=(n%i);
                if(m==0)
                {
                    p++;
                    pf[o]= i;
                    o++;
                }
            }
            if(p==0)
            {
                printf("\nEntered Number %d is a Prime.",n);
            }
            else
            {
                printf("\nEntered Number %d is not a Prime.",n);
            }
        }
        for(m=0;m<=p;m++)
        {
            printf("\t %d",pf[i]);
        }
    return 0;
}
