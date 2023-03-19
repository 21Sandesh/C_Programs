/*Write a C program to print day of week name using switch case.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int input;
    while(1)
    {
        printf("\t\tWELCOME\n");
        printf("Days in a Week:\n\t1.Sunday\n\t2.Monday\n\t3.Tuesday\n\t4.Wednesday\n\t5.Thursday\n\t6.Friday\n\t7.Satursday\n");
        printf("Enter the Number of Day in the Week\nINPUT: ");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
        {
            printf("%dth Day of the Week: Sunday",input);
        }break;
        case 2:
        {
            printf("%dth Day of the Week: Monday",input);
        }break;
        case 3:
        {
            printf("%dth Day of the Week: Tuesday",input);
        }break;
        case 4:
        {
            printf("%dth Day of the Week: Wednesday",input);
        }break;
        case 5:
        {
            printf("%dth Day of the Week: Thursday",input);
        }break;
        case 6:
        {
            printf("%dth Day of the Week: Friday",input);
        }break;
        case 7:
        {
            printf("%dth Day of the Week: Saturday",input);
        }break;
        default:
            {
                printf("\n\tOnly 7 Days Exists in a Week\n\tPlease a Enter Number among Those\n");
            }
        }
        printf("\n\n\t\tThank You!!!\n");
        printf("Press any Key to Clear Screen");
        getch();
        system("cls");
    }
}
