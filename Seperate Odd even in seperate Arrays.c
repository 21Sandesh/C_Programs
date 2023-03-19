#include<stdio.h>
int main()
{
    int n,i=0,j=0,k,odd[100],even[100];
    printf("Enter the Numbers to be Seperated: ");
        do
    {
        scanf("%d",&n);
        k = n%2;
        if(k==0)
        {
            even[i] = n;
            i++;
        }
        else
        {
            odd[j] = n;
            j++;
        }
    }
    while(n!=0);
    k = i;
    printf("\nThe Even Numbers Entered are: ");
     for(i=0;i<k;i++)
        {
            printf("\t%d",even[i]);
        }
        i = j;
    printf("\nThe Odd Numbers Entered are: ");
        for(j=0;j<i;j++)
        {
            printf("\t%d",odd[j]);
        }
        return 0;
}
