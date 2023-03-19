#include<stdio.h>
int main()
{
    int a,lar,small=0;
    printf("Enter the Numbers among which Largest and Smallest Number is Required: \n");
    do
    {
        scanf("%d",&a);
        if(a<lar)
        {
            if(a<small)
            {
                small = a;
            }
            else
            {
                small = small;
            }
        }
        else
        {
            lar = a;
        }
    }
    while(a!=0);
    printf("\nThe Largest Number among the Numbers Entered is: %d\n",lar);
    printf("\nThe Smallest Number among the Numbers Entered is: %d\n",small);
    return 0;
}
