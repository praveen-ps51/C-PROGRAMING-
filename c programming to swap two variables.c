/* c program to swap the contents of two variables without using temporary variables*/
#include<stdio.h>
int main(){
  float a,b;
  printf("enter the value of a and b");
  scanf("%f%f",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After  swapping\n");
  printf("a=%f\tb=%f\n",a,b);
   }
