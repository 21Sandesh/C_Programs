#include<stdio.h>
int main()
{
    int first,second,LCM;
    printf("Enter the First Number: ");
    scanf("%d",&first);
    printf("Enter the Second Number: ");
    scanf("%d",&second);
    LCM = first;
    while(1)
    {
        if(LCM%first == 0 && LCM%second == 0)
        {
            printf("LCM of the Entered Number is: %d",LCM);
            break;
        }
        LCM++;
    }
    return 0;
}
