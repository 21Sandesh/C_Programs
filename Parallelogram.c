#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int length,width,angle1,angle2;
    while(1)
    {
        printf("Enter Length of Parallelogram: ");
        scanf("%d",&length);
        printf("Enter Width of Parallelogram: ");
        scanf("%d",&width);
        printf("Enter Adjacent Angle of Parallelogram (in Degrees)\n\n\tAngle 1:");
        scanf("%d",&angle1);
        printf("\tAngle 2: ");
        scanf("%d",&angle2);
        if((angle1+angle2)==180)
        {
            if(angle1 == 90)
            {
                if(length == width)
                {
                    printf("The Entered Parallelogram is Square\n");
                }
                else
                {
                    printf("The Entered Parallelogram is Rectangle\n");
                }
            }
            else
            {
                if(length == width)
                {
                    printf("The Entered Parallelogram is Rhombus\n");
                }
                else
                {
                    printf("Its a Simple Parallelogram\n");
                }
            }
        }
        else
        {
            printf("\nInvalid Angle Input\n");
        }
    }
}
