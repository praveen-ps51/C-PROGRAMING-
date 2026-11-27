#include<stdio.h>
int main()
{
    int T,S,B,Water;
    float waterbill,total_bill;
    printf("enter total number of shirts trousers bedsheets you have given to laundry\n");
    scanf("%d %d %d",&S,&T,&B);
    Water=S*8+T*12+B*20;
    waterbill=Water/100*10;
    total_bill=waterbill+300;
    printf("your total laundry bill is %f",total_bill);

}
