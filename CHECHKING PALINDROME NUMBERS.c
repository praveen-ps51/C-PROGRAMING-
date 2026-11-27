/*WRITE A MODULAR C PROGRAM TO READ N RANDOM NUMBERS AND CHECK WHETHER EACH RANDOM NUMBER IS A PALINDROME NUMBER OR NOT*/
#include<stdio.h>
#include<stdlib.h>
int reverse(int n);
int main()
{
    int n,rev=0,i,num;
    printf("enter the integer value for n\n");
    scanf("%ld",&n);
    if(n<=0)
      {
        printf("invalid input\n");
        exit(0);
        }
        printf("enter %d random numbers\n",n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&num);
      rev = reverse(num);
    if(rev==num)
        printf("%d is a palindrome\n",num);
    else
        printf("%d is not a palindrome\n",num);

  }


}
int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}

