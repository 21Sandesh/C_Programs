/*Write a C program that calculate area of different shapes like square, rectangle, triangle*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int input;
    float length, width, area;
    while(1)
    {
        printf("\t\tWelcome!!!\n\n");
        printf("Enter to Calculate Area of Following Shapes\n\t1. Square\n\t2. Rectangle\n\t3. Triangle\nINPUT: ");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            {
                printf("\nYou have Chose to Calculate Area of \n\t\tSquare\n\n");
                printf("Enter the Length of Side of the Square: ");
                scanf("%f",&length);
                area = (length*length);
                printf("\nArea of Square of Side '%.3f' is: %f\n\n",length,area);
            }break;
        case 2:
            {
                printf("\tYou have Chose to Calculate Area of \n\t\tRectangle\n\n");
                printf("Enter the Length of the Rectangle: ");
                scanf("%f",&length);
                printf("Enter the Width of the Rectangle: ");
                scanf("%f",&width);
                area = (length*width);
                printf("\nArea of Rectangle of Length '%.3f' and Width '%.3f' is: %f\n\n",length,width,area);
            }break;
            case 3:
            {
                printf("\tYou have Chose to Calculate Area of \n\t\tTriangle\n\n");
                printf("Enter the Height of the Triangle: ");
                scanf("%f",&length);
                printf("Enter the Base Length of the Traingle: ");
                scanf("%f",&width);
                area = ((length*width)/2);
                printf("\nArea of Triangle of Height '%.3f' and Base Length '%.3f' is: %f\n\n",length,width,area);
            }break;
            default:
                {
                    printf("Invalid Input, Please Chose among the following Options\n");
                }break;
        }
        printf("Press any Key to Clear the Screen");
        getch();
        system("cls");
    }
}
