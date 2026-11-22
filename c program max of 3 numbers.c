//WRITE A C PROGRAM TO FIND A MAX OF THREE NUMBERS
#include<stdio.h>
int main()
{
   long int a,b,c;
    printf("enter any 3 integer number");
    scanf("%ld%ld%ld",&a,&b,&c);
    if(a>b&&a>c)
        printf("%ld is largest\n",a);
    else if(b>c)
        printf("%ld is largest\n",b);
    else
        printf("%ld is largest\n",c);

}
