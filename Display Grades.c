#include<stdio.h>
int main()
{
    int i;
    float n,o,t;
    printf("Enter \n1 for Percentage Obtained. \n2 for Marks Obtained.\n");
    scanf("%d",&i);
    if(i==1)
    {
        printf("Enter the Percentage Obtained: ");
        scanf("%f",&n);
        if(n>90)
            printf("\nOutstanding! You got 'A1' Grade");
        else
        {
            if(n>80)
            printf("\nExcellent! You got 'A2' Grade");
            else
            {
                if(n>70)
                printf("\nVery Good! You got 'B1' Grade");
                else
                {
                    if(n>60)
                    printf("\nGood! You got 'B2' Grade");
                    else
                    {
                        if(n>50)
                        printf("\nVery Nice! You got 'C1' Grade");
                        else
                        {
                            if(n>40)
                            printf("\nNice! You got 'C2' Grade");
                            else
                            {
                                if(n>=35)
                                printf("\nYou got 'D' Grade");
                                else
                                {
                                    if(n<35)
                                    printf("\nYou Failed!!!");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(i==2)
    {
        printf("Enter the Obtained Marks: ");
        scanf("%d",&o);
        printf("Enter Total Marks: ");
        scanf("%d",&t);
        n = (o/t)*100;
        printf("\nYou Got: %.3f",n);
        if(n>90)
            printf("\nOutstanding! You got 'A1' Grade");
        else
        {
            if(n>80)
            printf("\nExcellent! You got 'A2' Grade");
            else
            {
                if(n>70)
                printf("\nVery Good! You got 'B1' Grade");
                else
                {
                    if(n>60)
                    printf("\nGood! You got 'B2' Grade");
                    else
                    {
                        if(n>50)
                        printf("\nVery Nice! You got 'C1' Grade");
                        else
                        {
                            if(n>40)
                            printf("\nNice! You got 'C2' Grade");
                            else
                            {
                                if(n>=35)
                                printf("\nYou got 'D' Grade");
                                else
                                {
                                    if(n<35)
                                    printf("\nCongrats You Failed");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else//if(n!=1  n!=2)
    {
        printf("\nInvalid Input");
    }
    return 0;
}
