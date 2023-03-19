#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i1,*ip1,*arrp1[50],arr1[50],i2,*ip2,*arrp2[50],arr2[50],*arrp3[100],arr3[100],i3,*i3p;
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
    //int b
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
        }
    }
}
void write1()
{
    FILE *file1;
    //int *arrp[50],arr[50];
    i1=-1;
    file1 = fopen("experiment1.txt","a");
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
    for(int n=0;n<i1;n++)
    {
        fprintf(file1,"%d", *arrp1[n]);
    }
    fclose(file1);
}
void read1()
{
    FILE *file1;
    file1 = fopen("experiment1.txt","r+");
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
    file2 = fopen("experiment2.txt","a");
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
    for(int n=0;n<i2;n++)
    {
        fprintf(file2,"%d", *arrp2[n]);
    }
    fclose(file2);
}
void read2()
{
    FILE *file2;
    file2 = fopen("experiment2.txt","r+");
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
/*void write3()
{
    FILE *file3;
    //int *arrp[50],arr[50];
    i3=-1;
    file3 = fopen("experiment3.txt","a");
    printf("Enter the Numbers: \n");
    do
    {
        i3++;
        printf("\t\t");
        scanf("%d",&arr3[i3]);
        arrp3[i3] = &arr3[i3];
    }
    while(arr3[i3]!=0);
    i3p = &i3;
    printf("OUTPUT: %d",i3);
    desc(*arrp3, *i3p);
    fclose(file3);
}*/
void read3()
{
    FILE *file3;
    file3 = fopen("experiment3.txt","r+");
    int n,var,arr3[100],*arr3p[100];
    i3 = *i3p;
    if(file3 == NULL)
    {
        printf("Can't Open File");
        getch();
        exit(1);
    }
    //printf("OUTPUT: %d",i3);
    /*for(n=0;n<i3;n++);
    {
        arr3[n] = *arrp3[n];
    }*/
    
    for(int n=0;n<i3;n++)
    {
        fprintf(file3,"%d", *arrp3[n]);
    }
    printf("Numbers in Ascending Order are: \n");
    for(int n=0;n<i3;n++)
    {
        printf("\t%d", *arrp3[n]);
    }
    fclose(file3);
}
int main()
{
    int input;
    while(1)
    {
        printf("___________________________________\n");
        printf("Enter:                             |\n");
        printf("\t1.To Open File 1           |\n\t2.To open File 2           |\n");
        printf("\t3.To Open File 3           |\n\t4.Merge File 1 and File 2  |\n");
        printf("___________________________________|\nINPUT: ");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            {
                        printf("______________________________________\n");
                        printf("Enter to Perform Following Operation: ");
                        printf("\n\t1.Write\n\t2.Read\n\t3.Exit\nINPUT: ");
                        scanf("%d",&input);
                        printf("_______________________________________\n");
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
                    int n,k,s=0,i3,*lp;
                    FILE *file1,*file2;
                    printf("Enter to Perform Following Operation: ");
                    printf("\n\t1.Write\n\t2.Read\n\t3.Exit\nINPUT: ");
                    scanf("%d",&input);
                    switch(input)
                        {
                        case 1:
                        {
                            //write3();
                            break;
                        }
                        case 2:
                        {
                            read3();
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
            case 4:
                {
                    int k,s=0;
                    FILE *file1,*file2,*file3;
                    file1 = fopen("experiment1.txt","a+");
                    file2 = fopen("experiment2.txt","a+");
                    //printf("Numbers in Ascending Order are: \n");
                    //printf("OUTPUT: %d",i1);
                    //printf("OUTPUT: %d",i2);
                    for(k=0;k<(i1);k++)
                    {
                        arr3[k] = arr1[k];
                        arrp3[k] = &arr3[k];
                    }
                    i3 = (i1+i2);
                    for(k=(i1);k<i3;k++)
                    {
                        arr3[k] = arr2[s];
                        arrp3[k] = &arr3[k];
                        s++;
                    }
                    //printf("\nOUTPUT: %d",i3);
                    i3p = &i3;
                    //printf("\nOUTPUT: %d\n",*lp);
                    asc(*arrp3, *i3p);
                    file3 = fopen("experiment3.txt","w+");
                    for(k=0;k<i3;k++)
                    {
                        arr3[k] = *arrp3[k];
                    }
                    asc(*arrp3, *i3p);
                    fclose(file1);
                    fclose(file2);
                    fclose(file3);
                    printf("Files Merged Successfully!!!");
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
/*for(n=0;n<i3;n++)
                    {
                        printf("\t%d", *arrp3[n]);
                    }*/
