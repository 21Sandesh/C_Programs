#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int input,a=0,*number;
    char hexa[30],hexap[30];
    while(1)
    {
    printf("Enter:\n\t1.Binary to Decimal\n\t2.Binary to Hexadecimal");
    printf("\n\t3.Decimal to Binary\n\t4.Decimal to Hexadecimal");
    printf("\n\t5.Hexadecimal to Binary\n\t6.Hexadecimal to Decimal\nINPUT: ");
    scanf("%d",&input);
    switch(input)
    {
    case 1:
        {
            printf("Enter the Binary Number: ");
            scanf("%d",&number);
            bintodeci(&number);
        }
        break;
    case 2:
        {
            printf("Enter the Binary Number: ");
            scanf("%d",&number);
            bintohexa(&number);
        }
        break;
    case 3:
        {
            printf("Enter the Decimal Number: ");
            scanf("%d",&number);
            decitobin(&number);
        }
        break;
    case 4:
        {
            printf("Enter the Decimal Number: ");
            scanf("%d",&number);
            decitohexa(&number);
        }
        break;
    case 5:
        {
            printf("Enter Hexadecimal Number: ");
            scanf("%s",&hexa);
            do
            {
                hexap[a] = &hexa[a];
                hexatobin(*hexap[a]);
                a++;
            }
            while(hexa[a]!='\0');
        }
    }
    printf("Press any key to Clear the Screen");
    getch();
    system("cls");
    }
}
int bintodeci(int *number)
{
    int n,num=0,i=0,j,k,m,*mp,disp[100];
    n = *number;
    k=n;
    do
    {
        k = k/10;
        i++;
    }
    while(k>0);
    k=1;
    for(j=1;j<=i;j++)
    {
        k = k*10;
    }
    disp[0]=0;
    m=1;
    for(j=1;j<=i;j++)
    {
        disp[j] = ((n%(m*10))-disp[(j-1)])/m;
        m = m*10;
    }
    m=0;
    for(j=1;j<=i;j++)
    {
        if(disp[j]<=1)
        {
            num=0;
            n=1;
            for(j=1;j<=i;j++)
            {
                num = num+(disp[j]*n);
                n = n*2;
            }
        }
        else
        {
            m++;
        }
    }
    number = &num;
    mp = &m;
    if(m==0)
    {
        printf("\nDecimal Equivalent is: %d\n\n",num);
    }
    else
    {
        printf("\nPlease Enter a Binary Number\n");
    }
}
int bintohexa(int *number)
{
    int n,num=0,i=0,j,k,m,*mp,disp[100],rem;
    char hexa[30];
    n = *number;
    k=n;
    do
    {
        k = k/10;
        i++;
    }
    while(k>0);
    k=1;
    for(j=1;j<=i;j++)
    {
        k = k*10;
    }
    disp[0]=0;
    m=1;
    for(j=1;j<=i;j++)
    {
        disp[j] = ((n%(m*10))-disp[(j-1)])/m;
        m = m*10;
    }
    m=0;
    for(j=1;j<=i;j++)
    {
        if(disp[j]<=1)
        {
            num=0;
            n=1;
            for(j=1;j<=i;j++)
            {
                num = num+(disp[j]*n);
                n = n*2;
            }
        }
        else
        {
            m++;
        }
    }
    if(m==0)
    {
        printf("\nDecimal Equivalent is: %d\n\n",num);
    }
    else
    {
        printf("\nPlease Enter a Binary Number\n");
    }
    k = num;
    do
    {
        rem = k%16;
        j++;
        if(rem<10)
        {
            hexa[j] = 48 + rem;
        }
        else
        {
            hexa[j] = 55 + rem;
        }
        k = k/16;
    }
    while(k!=0);
    printf("Hexadecimal Equivalent is: ");
    for(int a=j; a>0; a--)
    {
        printf("%c",hexa[a]);
    }
    printf("\n");
}
int decitobin(int *number)
{
    int rem,i=1,binary=0,k;
    k = *number;
    do
    {
        rem = k%2;
        k = k/2;
        i = i*10;
        binary = binary+(rem*i);
    }
    while(k>0);
    binary = binary/10;
    printf("Binary Equivalent is: %d\n",binary);
}
int decitohexa(int *number)
{
    int rem,k,j=0;
    char hexa[20];
    k = *number;
    do
    {
        rem = k%16;
        j++;
        if(rem<10)
        {
            hexa[j] = 48 + rem;
        }
        else
        {
            hexa[j] = 55 + rem;
        }
        k = k/16;
    }
    while(k!=0);
    printf("Hexadecimal Equivalent is: ");
    for(int a=j; a>0; a--)
    {
        printf("%c",hexa[a]);
    }
    printf("\n");
}
int hexatobin(char *hexap)
{
    int k=0;
    while(*hexap[k])
	{
		switch(*hexap[k])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid Entry, Please Try Again  %c",*hexap[k]);
		}
		k++;
	}
}
/*int bintohexa(int *number)
{
    int n,i=0,k,l=1,disp[20],rem,temp=0,a,j,pow;
    k = *number;
    do                //i gets number of Digits
    {
        rem = k%10;
        k = k/10;
        disp[i] = rem;
        i++;          //i gets number of Digits
    }
    while(k>0);
    pow = i;
    for(a=0;a<i;a++)
    {
        printf("Output of disp[%d]: %d\n",a,disp[a]);
    }
    do
    {
        --pow;
        l = l*10;
    }
    while(pow>0);
    printf("OUTPUT: %d\n",l);
    a=0;
    j=0;
    do
    {
        temp = (temp*j)+disp[a];
        j = j*10;
        if(j==0)
        {
            j = j+10;
        }
    }
    while(j!=l);
    printf("OUTPUT: %d",temp);
}*/

