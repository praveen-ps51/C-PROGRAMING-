#include<stdio.h>
void swapping(int a, int b);
int main()
{
    int a , b;
    printf("enter any two integer values\n");
    scanf("%d%d",&a,&b);
    swapping(a,b);
}
    void swapping(int a, int b)
    {
        int c;
        c=a;
        a=b;
        b=c;
        printf("A = %d \n B = %d",a,b);
    }
