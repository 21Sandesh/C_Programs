#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i1,*ip1,*arrp1[50],arr1[50],i2,*ip2,*arrp2[50],arr2[50],*arrp[100],arr[100];
void asc(int *a, int n)
{
    int temp,i,j;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void desc(int *a, int n)
{
    int temp,i,j;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            if(a[j]==a[j+1])
            {
                continue;
            }
        }
    }
}
void write1()
{
    FILE *file1;
    //int *arrp[50],arr[50];
    i1=-1;
    file1 = fopen("experiment1.dat","a");
    printf("Enter the Numbers: \n");
    do
    {
        i1++;
        printf("\t\t");
        scanf("%d",&arr1[i1]);
        arrp1[i1] = &arr1[i1];
    }
    while(arr1[i1]!=0);
    ip1 = &i1;
    printf("OUTPUT: %d",i1);
    desc(*arrp1, *ip1);
    fclose(file1);
}
void read1()
{
    FILE *file1;
    file1 = fopen("experiment1.dat","r+");
    int n;
    i1 = *ip1;
    if(file1 == NULL)
    {
        printf("Can't Open File");
        getch();
        exit(1);
    }
    //printf("OUTPUT: %d",i);
    for(n=0;n<i1;n++);
    {
        arr1[n] = *arrp1[n];
    }
    printf("Numbers in Descending Order are: \n");
    for(int n=0;n<i1;n++)
    {
        printf("\t%d", *arrp1[n]);
    }
    fclose(file1);
}
void write2()
{
    FILE *file2;
    //int *arrp[50],arr[50];
    i2=-1;
    file2 = fopen("experiment2.dat","a");
    printf("Enter the Numbers: \n");
    do
    {
        i2++;
        printf("\t\t");
        scanf("%d",&arr2[i2]);
        arrp2[i2] = &arr2[i2];
    }
    while(arr2[i2]!=0);
    ip2 = &i2;
    printf("OUTPUT: %d",i2);
    desc(*arrp2, *ip2);
    fclose(file2);
}
void read2()
{
    FILE *file2;
    file2 = fopen("experiment2.dat","r+");
    int n;
    i2 = *ip2;
    if(file2 == NULL)
    {
        printf("Can't Open File");
        getch();
        exit(1);
    }
    //printf("OUTPUT: %d",i);
    for(n=0;n<i2;n++);
    {
        arr2[n] = *arrp2[n];
    }
    printf("Numbers in Descending Order are: \n");
    for(int n=0;n<i2;n++)
    {
        printf("\t%d", *arrp2[n]);
    }
    fclose(file2);
}
int main()
{
    int input;
    while(1)
    {
        printf("_____________\n");
        printf("Enter:                             |\n");
        printf("\t1.To Open File 1           |\n\t2.To open File 2           |\n");
        printf("\t3.Merge File 1 and File 2  |\n_____________|\nINPUT: ");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            {
                        printf("______________\n");
                        printf("Enter to Perform Following Operation: ");
                        printf("\n\t1.Write\n\t2.Read\n\t3.Exit\nINPUT: ");
                        scanf("%d",&input);
                        printf("_____________\n");
                        switch(input)
                        {
                        case 1:
                        {
                            write1();
                            break;
                        }
                        case 2:
                        {
                            read1();
                            break;
                        }
                        }
                        break;
            }
            break;
        case 2:
            {
                        printf("Enter to Perform Following Operation: ");
                        printf("\n\t1.Write\n\t2.Read\n\t3.Exit\nINPUT: ");
                        scanf("%d",&input);
                        switch(input)
                        {
                        case 1:
                        {
                            write2();
                            break;
                        }
                        case 2:
                        {
                            read2();
                            break;
                        }
                        default:
                            {
                                printf("Enter Valid Input");
                                break;
                            }
                        }
                        break;
            }
            break;
            case 3:
                {
                    int n,k,s=0,l,*lp;
                    FILE *file1,*file2;
                    file1 = fopen("experiment1.dat","a+");
                    file2 = fopen("experiment2.dat","a+");
                    printf("Numbers in Ascending Order are: \n");
                    //printf("OUTPUT: %d",i1);
                    //printf("OUTPUT: %d",i2);
                    for(k=0;k<(i1);k++)
                    {
                        arr[k] = arr1[k];
                        arrp[k] = &arr[k];
                    }
                    l = (i1+i2);
                    for(k=(i1);k<l;k++)
                    {
                        arr[k] = arr2[s];
                        arrp[k] = &arr[k];
                        s++;
                    }
                    //printf("\nOUTPUT: %d",l);
                    lp = &l;
                    //printf("\nOUTPUT: %d\n",*lp);
                    asc(*arrp, *lp);
                    for(k=0;k<l;k++)
                    {
                        arr[k] = *arrp[k];
                    }
                    for(n=0;n<l;n++)
                    {
                        printf("\t%d", *arrp[n]);
                    }
                    fclose(file1);
                    fclose(file2);
                    break;
                }
            default:
                {
                        printf("Enter Valid Input");
                        break;
                }

        }
        printf("\nPress any Key to Clear Screen: ");
        getch();
        system("cls");
    }
}
