/*write a modular c program to read an integer number and check whether the given number is strong number or not*/
#include<stdio.h>
#include<stdlib.h>
int factorial(int n);
int sum_individual_digits(int n);
int main()
{
    int n ,s;
    printf("enter an integer value n\n");
    scanf("%d",&n);
    if(n<=0)
      {
        printf("invalid input\n");
        exit(0);}
   s = sum_individual_digits(n);
   if(s==n)
    printf("%d is strong number\n",n);
   else
    printf("%d is not a strong number\n",n);
}
int sum_individual_digits(int n)
{
    int s=0,d;
    while(n>0)
       {

        d=n%10;
    s=s+factorial(d);
    n=n/10;}
    return s;
    }
int factorial(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    return fact;
}
