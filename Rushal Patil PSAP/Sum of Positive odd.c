#include<stdio.h>
int add(int *number)
{
    sum = sum+(*number);
    return sum;
}
int main()
{
    int number,*numberp,sum;
        printf("Enter the Numbers: \n");
        scanf("%d",&number);
        while(number != -1)
        {
            numberp = &number;
            if(number > 0)
            {
                if(number%2 == 1)
                {
                    sum = add(numberp);
                }
            }
            scanf("%d",&number);
        }
        printf("Sum of Positive Odd Numbers is: %d",sum);
        return 0;
}
