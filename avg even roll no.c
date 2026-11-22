#include<stdio.h>
void oe_average(int n);
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if(n<0)
        printf("invalid input\n");
    else
         oe_average(n);



}
void oe_average(int n)
{   printf("enter the student roll no\n");
    int es=0,os=0,roll_no;
    float aes,aos;
    while(n!=0)
    {
        scanf("%d",&roll_no);
        if(roll_no%2==0)
            es= es + roll_no;
        else
            os = os + roll_no;
            aes = es/n;
            aos = os/n;
            printf("the value of avg even roll no sum = %f",aes);
            printf("the value of avg odd roll no sum = %f",aos);

    }
}
