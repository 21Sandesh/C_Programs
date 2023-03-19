#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i=0,j=0,r=0,s;
    char first[50],second[50],merge[100],rev[50];
    while(1)
    {
        printf("\nEnter the Below Number to Corresponding perform Action: \n");
        printf("1.Calculate Length of String\n2.Concatenate Two Strings\n");
        printf("3.Compare Two Strings\n4.Reverse the Given String\n5.Copy String\n");
        scanf("%d",&n);
        {
            switch(n)
        {
        case 1:
            {
                printf("Enter: 1.Using Library\n2.Without Library\n");
                scanf("%d",&m);
                if(m==1)
                {
                    printf("Enter the String: ");
                    fflush(stdin);
                    gets(first);
                    i = strlen(first);
                    printf("The Length of String is: %d\n",i);
                }
                if(m==2)
                {
                    printf("Enter the String: ");
                    scanf("%s",first);
                    while(1)
                    {
                    if(first[i]=='\0')
                    {
                    break;
                    }
                    else
                    {
                    i++;
                    }
                    }
                    printf("Size of String is: %d\n",i);
                }
                if(m!=1)
                {
                    if(m!=2)
                    {
                        printf("Enter a Valid Input");
                    }
                }break;
            }break;
        case 2:
            {
                printf("Enter: 1.Using Library\n2.Without Library\n");
                scanf("%d",&m);
                if(m==1)
                {
                    printf("Enter the First String: ");
                    scanf("%s",&first);
                    printf("Enter the Second String: ");
                    scanf("%s",&second);
                    printf("The Combined String is: %s\n",strcat(first,second));
                }
                if(m==2)
                {
                    printf("Enter First String: ");
    scanf("%s",&first);
    printf("Enter Second String: ");
    scanf("%s",&second);
    while(1)
    {
        if(first[i]=='\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    while(2)
    {
        if(second[j]=='\0')
        {
            break;
        }
        else
        {
            j++;
        }
    }
    printf("The Merged String is: ");
    for(s=0;s<i;s++)
    {
        merge[s] = first[s];
        printf("%c",merge[s]);
    }
    for(s=i;s<(i+j);s++)
    {
        merge[s] = second[r];
        r++;
        printf("%c",merge[s]);
    }
                }
                if(m!=1)
                {
                    if(m!=2)
                    {
                        printf("Enter a Valid Input\n");
                    }
                }break;
            }break;
            case 3:
                {
                    printf("Enter: 1.Using Library\n2.Without Library\n");
                    scanf("%d",&m);
                    if(m==1)
                    {
                        printf("Enter First String: ");
    scanf("%s",&first);
    printf("Enter Second String: ");
    scanf("%s",&second);
    i = strcmp(first,second);
    if(i==0)
    {
        printf("The two Strings are Equal\n");
    }
    else
    {
        printf("The two Strings are not Equal\n");
    }
                    }
                    if(m==2)
                    {
                        printf("Enter First String: ");
    scanf("%s",&first);
    printf("Enter Second String: ");
    scanf("%s",&second);
    while(1)
    {
        if(first[i]=='\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    while(2)
    {
        if(second[j]=='\0')
        {
            break;
        }
        else
        {
            j++;
        }
    }
    if(i==j)
    {
        for(s=0;s<i;s++)
        {
            if(first[s]==second[s])
            {
                r++;
            }
        }
        if(r>0)
        {
            printf("The Two Strings are Equal\n");
        }
        else
        {
            printf("The Two Strings are not Equal\n");
        }
    }
    else
    {
        printf("The Two Strings are not Equal");
    }
                    }
                    if(m!=1)
                    {
                        if(m!=2)
                        {
                            printf("Enter Valid Input");
                        }
                    }break;
                }break;
            case 4:
                {
                    printf("Enter the String: ");
    scanf("%s",&first);
    while(1)
    {
        if(first[i]=='\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    s=i;
    i=0;
    printf("Reversed String is: ");
    for(j=(s);j>=0;j--)
    {
        rev[i] = first[j];
        printf("%c",rev[i]);
        i++;
    }break;
                }break;
            case 5:
                {
                    printf("Enter: 1.Using Library\n2.Without Library\n");
                    scanf("%d",&m);
                    if(m==1)
                    {
                        printf("Enter the String: ");
                        scanf("%s",&first);
                        strcpy(second,first);
                        printf("The Copied String is: %s",second);
                    }
                    if(m==2)
                    {
                        printf("Enter the String: ");
    scanf("%s",&first);
    while(1)
    {
        if(first[i]=='\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    printf("The String is of %d Characters and is Copied as: ",i);
    for(j=0;j<i;j++)
    {
        second[j] = first[j];
        printf("%c",second[j]);
    }
                    }
                    if(m!=1 && m!=2)
                        {
                            printf("Enter Valid Input");
                        }
                }break;
            default:
                {
                    printf("Enter Valid Number\n");
                    break;
                }break;
        }
        }
    }
    return 0;
}
