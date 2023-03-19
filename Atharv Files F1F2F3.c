#include<stdio.h>
void bubblesortDescending(int *a, int n){
    int temp;
    int issorted = 0;
    for (int i = 0; i < n-1; i++)
    {
        issorted = 1;

        for (int j = 0; j <n-1-i ; j++)
        {
            if(a[j]<a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                issorted = 0;
            }

        }
        if(issorted)
        {
            return;
        }
    }
}

void bubblesortAscending(int *a, int n){
    int temp;
    int issorted = 0;
    for (int i = 0; i < n-1; i++)
    {
        issorted = 1;

        for (int j = 0; j <n-1-i ; j++)
        {
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                issorted = 0;
            }
        }
        if(issorted)
        {
            return;
        }
    }
}



int main()
{
    FILE *F1, *F2, *F3;
    int arr1[100], arr2[100], num1, num2, i, num3=0, j=0;
    int data, data2;
    int arrFinal[100];

    F1 = fopen("File1.txt","w");
    printf("How many numbers do you want Enter in first file = ");
    scanf("%d", &num1);
    printf("\n");

    printf("Enter integers = \n");
    for(i=0; i<num1; i++){
        scanf("%d", &arr1[i]);
    }

    bubblesortDescending(arr1, num1);
    printf("\nDescending order array = ");
    for(i=0; i<num1; i++){
        printf("arr[%d] = %d ", i, arr1[i]);
    }
    printf("\n");

    for(i=0; i<num1; i++){
        fprintf(F1,"%d",arr1[i]);
    }
    fclose(F1);

    F2 = fopen("File2.txt","w");
    printf("How many numbers do you want Enter in second file = ");
    scanf("%d", &num2);
    printf("\n");

    printf("Enter integers = \n");
    for(i=0; i<num2; i++){
        scanf("%d", &arr2[i]);
    }

    bubblesortDescending(arr2, num2);
    printf("\nDescending order array = ");
    for(i=0; i<num2; i++){
        printf("arr[%d] = %d ", i, arr2[i]);
    }
    printf("\n");

    for(i=0; i<num2; i++){
        fprintf(F1,"%d",arr2[i]);
    }
    fclose(F2);

    num3 = num1 + num2;

    for(i=0; i<num1; i++){
        arrFinal[i] = arr1[i];
    }

    for(i=num1;i<num3;i++){
        arrFinal[i] = arr2[j];
        j++;
    }

    bubblesortAscending(arrFinal, num3);

    printf("Data file 3 without repetation=");
     for(i=0; i<num3; i++){
        if(arrFinal[i] != arrFinal[i+1]){
            printf("%d\t",arrFinal[i]);
        }
        if(arrFinal[i]==arrFinal[i+1]){
            printf("%d\t", arrFinal[i]);
            i++;
        }

    }

    F3 = fopen("File3.txt", "w");

    for(i=0; i<num3; i++){
        if(arrFinal[i] != arrFinal[i+1]){
            fprintf(F3,"%d",arrFinal[i]);
        }
        if(arrFinal[i]==arrFinal[i+1]){
            fprintf(F3, "%d", arrFinal[i]);
            i++;
        }

    }
    fclose(F3);


    return 0;
}
