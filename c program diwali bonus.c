#include<stdio.h>
#include<stdlib.h>
int main()
{
    char gender;
    float salary,bonus,TS;
    printf("ENTER YOUR SALARY AND GENDER\n");
    scanf("%f%*c%c",salary,gender);
    if(salary<=0)
    {
        printf("invalid salary entered\n");
        exit(0);
    }
    else if(salary<1000)
    {
        if(gender=='M'||gender=='m')
        {
            bonus=0.02*salary;
            TS=salary +0.05*salary+bonus;
        }
   else if(gender=='f'||gender=='F')
   {
       bonus=0.02*salary;
       TS=salary+0.1*salary+bonus;
   }
   else
   {
       printf("Invalid gender value\n");
       exit(0);
   }
   printf("YOUR total salary = %f\nyour bonus is %f",TS,bonus);

    }
    else
    {
        if(gender=='M'||gender=='m')
        {

         TS=salary+0.05*salary;}
    else if(gender=='F'||gender=='f')
    {
        TS=salary+0.1*salary;

    }
    else
    {
        printf("invalid gender\n");
        exit(0);
    }
    }
    printf("YOUR total salary = %f\nyour bonus is %f",TS,bonus);
}

