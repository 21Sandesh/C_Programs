#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void disp()
{
    printf("Enter\n\t________________________\n\t|+  for Addition       |\n\t|-  for Subtraction    |");
    printf("\n\t|*  for Multiplication |\n\t|T  for Transpose      |\n");
}
int main()
{
    int a,b,c,d,r1,c1,r2,c2,arra[100][100],arrb[100][100],mat[100][100];
    char S;
    while(1)
    {
            disp();
            printf("INPUT: ");
            scanf("%s",&S);
            switch(S)
    {
    case '+' :
        {
                printf("\n Enter Number of Rows in First Matrix:      ");
                scanf("%d",&r1);
                printf("\n Enter Number of Columns in First Matrix:   ");
                scanf("%d",&c1);
                printf("\n Enter Number of Rows in Second Matrix:     ");
                scanf("%d",&r2);
                printf("\n Enter Number of Columns in Second Matrix:  ");
                scanf("%d",&c2);
    if(r1==r2 && c1==c2)
    {
        for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("\nEnter the %d, %d th Number in First Matrix: ",a,b);
                scanf("%d",&arra[a][b]);
            }
        }
        for(c=1;c<=r2;c++)
        {
            for(d=1;d<=c2;d++)
            {
                printf("\nEnter the %d, %d th Number in Second Matrix: ",c,d);
                scanf("%d",&arrb[c][d]);
            }
        }
        printf("Press any Key to Clear Screen");
        getch();
        system("cls");
        disp();
        printf("First Matrix: \n");
        for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("%d\t",arra[a][b]);
            }
            printf("\n");
        }
        printf("Second Matrix: \n");
        for(c=1;c<=r2;c++)
        {
            for(d=1;d<=c2;d++)
            {
                printf("%d\t",arrb[c][d]);
            }
            printf("\n");
        }
        printf("The Addition of the Two Given Matrix is: \n");
        c=1;
        for(a=1;a<=r1;a++)
        {
            d=1;
            for(b=1;b<=c1;b++)
            {
                mat[a][b] = ((arra[a][b])+(arrb[c][d]));
                printf("\t%d",mat[a][b]);
                d++;
            }
            printf("\n");
            c++;
        }
    }
    else
    {
        if(r1!=r2)
        {
            printf("\nAddition is not possible as no. of Rows in the Matrix Entered are not Equal.");
        }
        if(c1!=c2)
        {
            printf("\nAddition is not possible as no. of Columns in the Matrix Entered are not Equal.");
        }
    }
    printf("Press any Key to Clear Screen: ");
    getch();
    system("cls");
    break;
        }
        break;
    case '-' :
        {
            printf("\n Enter Number of Rows in First Matrix:      ");
            scanf("%d",&r1);
            printf("\n Enter Number of Columns in First Matrix:   ");
            scanf("%d",&c1);
            printf("\n Enter Number of Rows in Second Matrix:     ");
            scanf("%d",&r2);
            printf("\n Enter Number of Columns in Second Matrix:  ");
            scanf("%d",&c2);
    if(r1==r2,c1==c2)
    {
        for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("\nEnter the %d, %d th Number in First Matrix: ",a,b);
                scanf("%d",&arra[a][b]);
            }
        }
        for(c=1;c<=r2;c++)
        {
            for(d=1;d<=c2;d++)
            {
                printf("\nEnter the %d, %d th Number in Second Matrix: ",c,d);
                scanf("%d",&arrb[c][d]);
            }
        }
        printf("Press any Key to Clear Screen");
        getch();
        system("cls");
        disp();
        printf("First Matrix: \n");
        for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("%d\t",arra[a][b]);
            }
            printf("\n");
        }
        printf("Second Matrix: \n");
        for(c=1;c<=r2;c++)
        {
            for(d=1;d<=c2;d++)
            {
                printf("%d\t",arrb[c][d]);
            }
            printf("\n");
        }
        printf("The Subtraction of the Two Given Matrix is: \n");
        c=1;
        for(a=1;a<=r1;a++)
        {
            d=1;
            for(b=1;b<=c1;b++)
            {
                mat[a][b] = ((arra[a][b])-(arrb[c][d]));
                printf("\t%d",mat[a][b]);
                d++;
            }
            printf("\n");
            c++;
        }
    }
    else
    {
        if(r1!=r2)
        {
            printf("\nSubtraction is not possible as no. of Rows in the Matrix Entered are not Equal.");
        }
        if(c1!=c2)
        {
            printf("\nSubtraction is not possible as no. of Columns in the Matrix Entered are not Equal.");
        }
    }
    printf("Enter any Number to Clear Screen: ");
    getch();
    system("cls");
    break;
        }
        break;
    case '*' :
        {
            printf("\n Enter Number of Rows in First Matrix:      ");
            scanf("%d",&r1);
            printf("\n Enter Number of Columns in First Matrix:   ");
            scanf("%d",&c1);
            printf("\n Enter Number of Rows in Second Matrix:     ");
            scanf("%d",&r2);
            printf("\n Enter Number of Columns in Second Matrix:  ");
            scanf("%d",&c2);
    if(c1==r2)
    {
        for(a=1;a<=r1;a++)
    {
        for(b=1;b<=c1;b++)
        {
            printf("\nEnter the %d, %dth Element in First Matrix: ",a,b);
            scanf("%d",&arra[a][b]);
        }
    }
    for(c=1;c<=r2;c++)
    {
        for(d=1;d<=c2;d++)
        {
            printf("\nEnter the %d, %dth Element in Second Matrix: ",c,d);
            scanf("%d",&arrb[c][d]);
        }
    }
    printf("Press any Key to Clear Screen");
        getch();
        system("cls");
        disp();
        printf("First Matrix: \n");
        for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("%d\t",arra[a][b]);
            }
            printf("\n");
        }
        printf("Second Matrix: \n");
        for(c=1;c<=r2;c++)
        {
            for(d=1;d<=c2;d++)
            {
                printf("%d\t",arrb[c][d]);
            }
            printf("\n");
        }
    for(a=1;a<=r1;a++)
    {
        for(d=1;d<=c2;d++)
        {
            mat[a][d] = 0;
        }
    }
    for(a=1;a<=r1;a++)
    {
        for(d=1;d<=c2;d++)
        {
            for(b=1;b<=c1;b++)


                {
                    mat[a][d] = (mat[a][d]+(arra[a][b]*arrb[b][d]));
                }

        }
    }
    printf("\n Multiplication of the given Matrices is: \n");
    for(a=1;a<=r1;a++)
    {
        for(d=1;d<=c2;d++)
        {
            printf("\t%d",mat[a][d]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("\nMatrix Multiplication is not Possible as No. of Columns in First Matrix is not Equal to No. of Rows in Second Matrix.");
    }
    printf("Press any Key to Clear Screen: ");
    getch();
    system("cls");
    break;
        }
        case 'T':
            {
                printf("\n Enter Number of Rows in the Matrix:     ");
                scanf("%d",&r1);
                printf("\n Enter Number of Columns in the Matrix:  ");
                scanf("%d",&c1);
                printf("\nEnter the Matrix: \n");
    for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("\nEnter the %d, %d th Number in First Matrix: ",a,b);
                scanf("%d",&arra[a][b]);
            }
        }
        printf("Press any Key to Clear Screen");
        getch();
        system("cls");
        disp();
        printf("Entered Matrix: \n");
        for(a=1;a<=r1;a++)
        {
            for(b=1;b<=c1;b++)
            {
                printf("%d\t",arra[a][b]);
            }
            printf("\n");
        }
    printf("The Transpose of Given Matrix is: \n");
    for(a=1;a<=c1;a++)
        {
            for(b=1;b<=r1;b++)
            {
                printf("%d \t",arra[b][a]);
            }
            printf("\n");
        }
        printf("Press any Key to Clear Screen: ");
    getch();
    system("cls");
        break;
            }
            break;
    default :
        {
            printf("\nPlease Choose the Operation among +,-,*");
            break;
        }
    }
    }
    return 0;
}
