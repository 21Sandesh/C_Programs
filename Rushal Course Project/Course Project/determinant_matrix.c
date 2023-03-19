//Determinant of matrix
#include<stdio.h>
 
void determinant_matrix()
{
    int row , column;
    printf("Enter the no. of rows of matrix: ");
    scanf("%d", &row);
    printf("Enter the no. of columns of matrix: ");
    scanf("%d", &column); 
  int a[row][column], i, j;
 
  long determinant;

  printf("\nEnter the elements of matrix:\n ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the value of arr1[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }  
    }
 
  printf("\nThe matrix is\n");
  for(i = 0;i < row; i++){
      printf("\n");
      for(j = 0;j < column; j++)
           printf("%d\t", a[i][j]);
  }

  if (row == 3 && column == 3)
  {
    determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
  }
  else if (row == 2 && column == 2)
  {
    determinant = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
  }
  else if (row == 4 && column == 4)
  {
      determinant = (a[0][0]*((a[1][1]*a[2][2]*a[3][3])-(a[1][1]*a[2][3]*a[3][2])-(a[1][2]*
                    a[2][1]*a[3][3])+(a[1][2]*a[2][3]*a[3][1])+(a[1][3]*a[2][1]*a[3][2])-
                    (a[1][3]*a[2][2]*a[3][1])))-
                    
                    (a[0][1]*((a[1][0]*a[2][2]*a[3][3])-(a[1][0]*a[2][3]*a[3][2])-(a[1][2]*
                    a[2][0]*a[3][3])+(a[1][2]*a[2][3]*a[3][0])+(a[1][3]*a[2][0]*a[3][2])-
                    (a[1][3]*a[2][2]*a[3][0])))+

                    (a[0][2]*((a[1][0]*a[2][1]*a[3][3])-(a[1][0]*a[2][3]*a[3][1])-(a[1][1]*
                    a[2][0]*a[3][3])+(a[1][1]*a[2][3]*a[3][0])+(a[1][3]*a[2][0]*a[3][1])-
                    (a[1][3]*a[2][1]*a[3][0])))-

                    (a[0][3]*((a[1][0]*a[2][1]*a[3][2])-(a[1][0]*a[2][2]*a[3][1])-(a[1][1]*
                    a[2][0]*a[3][2])+(a[1][1]*a[2][2]*a[3][0])+(a[1][2]*a[2][0]*a[3][1])-
                    (a[1][2]*a[2][1]*a[3][0])));
  }
  else
  {
      printf("\n\n\tInvalid matrix.....!");
  }
  
  printf("\nDeterminant of matrix is : %ld", determinant);
 
}