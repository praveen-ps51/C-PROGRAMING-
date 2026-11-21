#include<stdio.h>
int sum_individual_digits(int n);
int main()
{
    int n, sum;
    printf("enter 3 digit integer number\n");
    scanf("%d",&n);
    if(n<=99&&n>=999)
    {
        printf("you should enter 3 digit number\n");
    }
    else
    {
        sum = sum_individual_digits(n);
        printf("sum of individual digit (%d)=%d\n",n,sum);
    }
}
int sum_individual_digits(int n)
{  int sum=0;
    while(n>0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
}
