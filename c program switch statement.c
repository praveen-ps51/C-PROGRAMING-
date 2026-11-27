/*write a c program to stimulate arithmatic calcultae*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char oper;
    int a,b;
    float result;
    printf("enter operator and two integer values a and b\n");
    scanf("%c%d%d",&oper,&a,&b);
    switch(oper){
    case '+': result=a+b;
                        break;
    case '-':result=a-b;
                        break;
    case '*':result=a*b;
                       break;
    case '/':if(b!=0)
           result=(float)a/b;
           else
           {
               printf("division by zero error");
               exit(0);
               break;
           }
    case '%':if(b!=0)
           result=a%b;
           else
           {
               printf("division by zero error\n)");
               exit(0);
               break;

           }
           printf("result of %c operator = %f\n",oper,result);

           default:printf("invalid arithmatic operator\n");}
}
