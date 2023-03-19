#include<stdio.h>
int main()
{
    int i=1,j,lar,small,N[10];
    char A[4];
    N[0]=0;
    printf("Enter the Number of Elements to be Entered: ");
    scanf("%d",&j);
    printf("Enter the Numbers among which Largest and Smallest Number is Required: \n");
    do
    {
        scanf("%d",N[i]);
        i++;
        if(N[i]>N[(i-1)])
        {
            lar = N[i];
        }
        else
        {
            lar = N[(i-1)];
        }
    }
    while(i<=j);
    printf("The Largest Number among the Numbers Entered is: %d",lar);
    return 0;
}
