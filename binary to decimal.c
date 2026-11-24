#include<stdio.h>
#include<stdlib.h>

long int binary_decimal(long int n ) ;

int main()
{
int  n  ,d;
long int b;
printf("enter n for decimal conversion  =");
scanf("%d",&n);

if(n > 0)
{
d =  binary_decimal(n );
printf("decimal = %ld",d);


}
else
{
printf("invalid");
}
}
long int  binary_decimal(long int n )
{
int rem ;
long int dec = 0 , base = 1 ;
while(n>0)
{
rem = n%10 ;
dec = dec + rem * base ;
n = n/10 ;
base = base*10 ;
}
return dec ;
}

