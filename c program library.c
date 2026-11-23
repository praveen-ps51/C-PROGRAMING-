#include<stdio.h>
#include<stdlib.h>
int main()
{
    int days;
    float fine;
    printf("Enter number of days\n");
    scanf("%d",&days);
    if(days<=0)
      {

       printf("invalid days entered");
    exit(0);}
    else if(days>0&&days<=5)
        fine=0.50*days;
    else if(days>5&&days<=10)
        fine=0.50*5+(days-5)*1;
    else if(days>10&&days<=30)
       {

    fine=0.50*5+5*1+(days-10)*5;}



    else
      {

       printf("Your membership is cancelled\n");
       exit(0);
       }

       printf("Fine to be paid  = %f",fine);

    }
