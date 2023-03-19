#include<stdio.h>
int main()
{
    int n,c;
    char str[100],ch;
    printf("\nPress:\n1.to use getch\n2.to use getche\n3.to use getchar\n4.to use gets\n5.to use scanf\n");
    while(1)
    {
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            {
                printf("\nEnter a Value: ");
                c = getch();
                printf("\nEntered Value is: ");
                putchar(c);
                break;
            }
            break;
        case 2:
            {
                printf("\nEnter a Value: ");
                c = getche();
                printf("\nEntered Value is:");
                putchar(c);
                break;

            }
            break;
        case 3:
            {
                fflush(stdin);
                printf("\nEnter a value :");
                c = getchar( );
                printf("\nYou entered: ");
                putchar( c );
                break;
            }
            break;
        case 4:
            {
                fflush(stdin);
                printf("\nEnter a Value: ");
                gets(str);
                printf("\nYou Entered: ");
                puts(str);
                break;
            }
            break;
        case 5:
            {
                printf("\nEnter a Value: ");
                scanf("%s",&str);
                printf("\nEntered Value is: %s",str);
                break;
            }
            break;
        default:
            {
                printf("Enter Valid Input\n");
                break;
            }
            break;
        }
    }
    return 0;
}
