#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100], str3[100], str4[100],first[50];
    int num;
    int i, j, k, count = 0, ascii;
    while(6)
    {
    printf("Enter your first string = ");
    gets(str1);
    //printf("\nEnter your second string = ");
    //gets(str2);
    printf("\nInstruction:\n\t1=Length\n\t2=Concate(merge)\n\t3=Compare\n\t4=inverse\n\t5=copy one string.");
    printf("\nEnter a number = ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        {
            printf("Enter the String: ");
                    i = strlen(first);
                    printf("The Length of String is: %d\n",i);
                    break;
        }
    case 2:
        {
                 for(i=0; str1[i]!='\0'; i++){
                    str3[i] = str1[i];
                 }
                 for(j=0; str2[j]!='\0';j++){
                     str3[i]=str2[j];
                     ++i;
                 }
                 ++i;
                 str3[i]='\0';
                 printf("\nMerge statement = %s", str3);
                 printf("\n(using lib.)Merge statement = %s", strcat(str1,str2));
                 break;
        }
    case 3:
        {
            for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++){
                     if(str1[i] != str2[i]){
                         count++;
                     }
                     else;

                 }
                 if(count >= 0){
                     printf("Two strings are not equal.");
                 }
                 else{
                     printf("Two strings are equal.");
                 }

                 ascii = strcmp(str1,str2);
                 if(ascii < 0 || ascii > 0){
                     printf("\n(using lib.)Two strings are not equal");
                 }
                 else if(ascii == 0){
                     printf("\n(using lib.)Two strings are equal");
                 }
                 else;
                 break;
        }
    case 4:
        {
               for(i=0; str1[i]!='\0'; i++){
                     count++;
                 }
                 count-=1;
                 for(j=0; str1[j]!='\0'; j++){
                     str3[j]=str1[count];
                     --count;
                 }
                 str3[j]='\0';
                 printf("\nReverse statement of string1 is = %s", str3);

                 printf("\n(using lib.)Reverse statement of string 1 is = %s", strrev(str1));

                 break;
        }
    case 5:
        {
            for(i=0; str1[i]!='\0'; i++){
                    str3[i] = str1[i];
                 }
                 for(j=0; str2[j]!='\0';j++){
                     str3[i]=str2[j];
                     ++i;
                 }

                 str3[i]='\0';

                 for(k=0; str3[k]!='\0'; k++){
                     str4[k] = str3[k];
                 }

                 str4[k]='\0';
                 printf("\nCopied statement 3 in String 4 = %s", str4);
                 strcpy(str4, strcat(str1,str2));
                 printf("\n(using lib.)Copied statement 3 in String 4 = %s", str4);
                 break;
        }
    default:
        {
            printf("You entered wrong number for operation.");
            break;
        }
    }

    }

    return 0;

}
