#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    float n,o,t;
    while(i==1,2)
    {
        printf("\nEnter \n1 for Percentage Obtained. \n2 for Marks Obtained.\nTo Calculate Grade.\n");
        scanf("%d",&i);
    switch(i)
        {
        case 1:
            {
                        printf("\nEnter the Percentage Obtained: ");
        scanf("%f",&n);
        if(n>100)
        {
            printf("Please Enter Valid Percentage.");
        }
        else
        {
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
                                    //if(n<35)
                                    printf("\nYou Failed");
                                    printf("\n");
                                }
                            }
                        }
                    }
                }
            }
        }
        }
        break;
            }
            break;
        case 2:
            {
                        printf("\nEnter the Obtained Marks: ");
        scanf("%d",&o);
        printf("\nEnter Total Marks: ");
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
                                    printf("\nYou Failed");
                                    printf("\n");
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
            }
        default:
            {
                printf("Enter Valid Input");
                break;
            }
        }
        printf("\nEnter any Number to clear Screen ");
        scanf("%d",&i);
        system("cls");
    }
    return 0;
}
