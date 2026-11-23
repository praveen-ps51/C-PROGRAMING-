//write a c program to compute area and circummference of circle
#define PI 3.142
#include<stdio.h>
int main()
{
   float circumference,area;
   int R;
   printf("Enter the value  of radius");
   scanf("%d",&R);
   circumference=2*PI*R;
   area=PI*R*R;
   printf("circumference of circle=%f\narea of circle=%f",circumference,area);
}
