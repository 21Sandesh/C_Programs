#include<stdio.h>

void bubblesorting(int *a, int n)
{
    int temp, i, j;
    for(i=0;i<(n-1);i++){

        for(j=0;j<(n-1-i);j++){

            if(a[j]>a[j+1]){

                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }
    }
}

int main()
{
    int num, i, j, k;
    int arr[100];
    printf("Enter size of a arr. = ");
    scanf("%d", &num);
    printf("\n");

    for(i=0;i<num;i++){
        printf("Enter number at %d index in arr. =", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    printf("Numbers in arr.= ");
    for(j=0; j<num; j++){
        printf("a[%d]=%d ", j, arr[j]);
    }

    bubblesorting(arr, num);
    printf("\n");


    printf("Numbers after sorting.= ");
    for(k=0; k<num; k++)
    {
        printf("a[%d]=%d ", k, arr[k]);
    }


    return 0;
}
