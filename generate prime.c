#include<stdio.h>
int isprime(int n);

int main()
{
int end,i,start;
printf("enter the starting number \n");
scanf("%d",&start);

printf("enter the ending number \n");
scanf("%d",&end);
 for(i=start;i<=end;i++)
 {
     if(isprime(i))
     {
         printf("%d ",i);

     }
     //displayPrime(start , end);
 }
 return 0;
 }
 int isprime(int n)
 {
     int i;
     for(i=2;i<=n/2;i++)
     {
         if(n%i==0)
            return 0;
     }
     return 1;
 }


