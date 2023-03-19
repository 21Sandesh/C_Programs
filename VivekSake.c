#include<stdio.h>
int main(){

//int arr[10] = {54,26,93,17,77,31,44,55,20,1};
int i,j,temp,k;

int n;
printf("\nEnter the size of array:");
scanf("%d",&n);

int arr[n];

printf("\n Enter elements in array:\n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);


printf("\n Array before sorting is:\n");
for(i=0;i<n;i++)
    printf("%d\t",arr[i]);

printf("\n Array while sorting is:\n");

for(i=0;i<n;i++){
    for(j=0;j<n-i;j++)
    {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
    printf("\nArray after %d pass is:\n",i);
        for(k=0;k<n;k++)
            printf("%d\t",arr[k]);
}
printf("\n Array after sorting is:\n");
for(i=0;i<n;i++)
    printf("%d\t",arr[i]);


}
