#include<stdio.h>
#include<stdlib.h>


typedef struct
{
 char name[30];
 int id;
 int salary;
}employee;

int main()
{
 int n,i,j;
 FILE *fptr;
 employee e[10], temp;


 fptr = fopen("employee.txt","rb");
 if(fptr == NULL)
 {
  printf("File error!");
  exit(1);
 }
 printf("Enter how many records:\n");
 scanf("%d",&n);
 for(i=0; i< n; i++) ;

 printf("Name + %s\t Id = %d\tSalary = %d\n" , e[i]. name , e[i] . id, e[i]. salary);

fclose (fptr);
return 0;
}
