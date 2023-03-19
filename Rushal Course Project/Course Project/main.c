#include<stdio.h>
#include "addition_matrix.c"
#include "subtraction_matrix.c"
#include "multiplication_matrix.c"
#include "nthPOWER.c"
#include "determinant_matrix.c"
#include "transpose_matrix.c"
#include "orthogonal_matrix.c"
#include "idempotent_matrix.c"
#include "inverse_matrix.c"


int main()
{
    
    int choice;
    printf("\t\t****************************************************************************************\n");

    printf("\t\t\t\t\t\tWELCOME to MATRIX CALCULATOR\n");
    printf("\t\t========================================================================================\n");
    printf("\t\t\t\t\t\t| 1. ADDITION OF MATRIX       |\n");
    printf("\t\t\t\t\t\t| 2. SUBTRACTION OF MATRIX    |\n");
    printf("\t\t\t\t\t\t| 3. MULTIPLICATION OF MATRIX |\n");
    printf("\t\t\t\t\t\t| 4. nTH POWER OF MATRIX      |\n");
    printf("\t\t\t\t\t\t| 5. TRANSPOSE OF MATRIX      |\n");
    printf("\t\t\t\t\t\t| 6. DETERMINANT OF MATRIX    |\n");
    printf("\t\t\t\t\t\t| 7. ORTHOGONAL MATRIX        |\n");
    printf("\t\t\t\t\t\t| 8. IDEMPOTENT MATRIX        |\n");
    printf("\t\t\t\t\t\t| 8. INVERSE MATRIX           |\n");

    start:
    printf("\n\t\t\t\t\tEnter the number from above : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        addition();
    }
    else if (choice == 2)
    {
        subtraction();
    }
    else if (choice == 3)
    {
        multiplication();
    }
    else if (choice == 4)
    {
        nth_power();
    }
    else if (choice == 5)
    {
        transpose_matrix();
    }
    else if (choice == 6)
    {
        determinant_matrix();
    }
    else if (choice == 7)
    {
        orthogonal();
    }
    else if (choice == 8)
    {
        idempotent();
    }
    else if (choice == 9)
    {
        inverse_matrix();
    }
    else
    {
        printf("\n\t\t\t\t\tYou entered some invalid entity..!\a");
        goto start;
    }
    
    return 0;
}