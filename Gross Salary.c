#include<stdio.h>
#include<stdlib.h>
int main()
{
    float HRA,DA,salary,gsalary;
    while(1)
    {
        printf("Enter the Basic Salary: ");
        scanf("%f",&salary);
        if(salary<=10000)
        {
            HRA = (salary*2)/10;
            DA = (salary*8)/10;
            gsalary = salary + HRA + DA;
        }
        if(salary<=20000)
        {
            HRA = (salary*2.5)/10;
            DA = (salary*9)/10;
            gsalary = salary + HRA + DA;
        }
        if(salary>20000)
        {
            HRA = (gsalary*3)/10;
            DA = (gsalary*9.5)/10;
            gsalary = salary + HRA + DA;
        }
        printf("The Gross Salary is: %f\n", gsalary);
    }
    return 0;
}
