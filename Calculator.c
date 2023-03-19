#include<stdio.h>
int main()
{
    float n[1],s;
    char o;
    while(1)
        {
            printf("Enter Two Numbers: \n");
            scanf("%f",&n[0]);
            scanf("%f",&n[1]);
            printf("Enter the Operation to be Performed: \n");
            scanf("%s",&o);
            switch(o)
            {
            case '+':
                {
                    s = n[0]+n[1];
                    printf("Sum is: %f\n",s);
                    printf("\n");
                    break;
                }
                break;
            case '-':
                {
                    s = n[0]-n[1];
                    printf("Difference is: %f\n",s);
                    printf("\n");
                    break;
                }
                break;
            case '*':
                {
                    s = n[0]*n[1];
                    printf("Product is: %f\n",s);
                    printf("\n");
                    break;
                }
                break;
            case '/':
                {
                    if(n[1]==0)
                    {
                        printf("Division by zero is not Possible\n");
                        printf("\n");
                    }
                    else
                    {
                        s = n[0]/n[1];
                        printf("Division is: %f\n",s);
                        printf("\n");
                    }
                    break;
                }
            default:
                {
                    printf("Please Enter a Valid Input\n");
                    printf("\n");
                    break;
                }
                break;
            }
        }
        return 0;
}
