#include<stdio.h>
#include<math.h>
int isArmstrong(int ID);
int generate_Armstrong(int n);
int main()
{
    int n, c;
    printf("Enter n\n");
    scanf("%d",&n);
    if(n<=0)
        printf("Invalid input\n");
    else
    {
        c=generate_Armstrong (n);
        printf("Count of special registration ID=%d\n",c);
    }
}
int generate_Armstrong(int n)
{
    int c=0,ID,i;
    for (i=0;i<n;i++)
    {
        scanf("%d", &ID);
        if(isArmstrong(ID)==ID)
        c++;
    }
    return c;
}
int isArmstrong(int n)
{
    int t=n, c=0,s=0,d;
    while(t>0)
    {
        d=t%10;
        c=c+1;
        t=t/10;
    }

    while(n>0)
    {
        s=s+pow(n%10,c);
        n=n/10;
    }
            return s;
}
