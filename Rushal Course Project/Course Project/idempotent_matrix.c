#include<stdio.h>
void idempotent()
{
    int count= 0 ;
    int order;
    int sum= 0 ;
    printf("Enter the order of matrix: ");
    scanf("%d", &order);
    int arr1[order][order];
    int product[order][order];

    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("Enter the value of arr1[%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
        
    }
    printf("Your entered matrix is: \n");
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order ; j++)
        {
            for (int k = 0; k < order; k++)
            {
                sum = sum + arr1[i][k]*arr1[k][j];
            }

            product[i][j] = sum;
            sum = 0;    
        }
        
    }

    printf("\nSquare matrix of entered matrix is: \n");

    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
        
    }
    
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            if (arr1[i][j] != product[i][j])
            {
                printf("\nMatrix is not Idempotent..!\n");
                break;
            }
            else
            {
                for (int i = 0; i < order; i++)
                {
                    for (int j = 0; j < order; j++)
                    {
                        if (arr1[i][j] == product[i][j])
                        {
                            count +=1;
                        }
                        if (count == order * order)
                        {
                            printf("\nMatrix is Idempotent..!\n");
                        }
                        
                    }
                    
                }
                
            }
            
            
        }
        
    }

}
