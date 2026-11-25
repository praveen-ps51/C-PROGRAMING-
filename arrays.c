#include<stdio.h>
#include<stdlib.h>
void read(int A[],int n);
void print(int A[],int n);
void oddsum(int A[],int n);
void average(int A[],int n);
void max(int A[],int n);
void studenteligible(int A[],int n);
int main()
{
    int n,A[1];
    printf("enter the value for n\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("invalid input\n");
        exit(0);

    }
    read(A,n);

}
void read(int A[],int n)
{
    int i;
    printf("enter the integer numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
   print(A,n);
}
void print(int A[],int n)
{
    int i;
    printf("entered integer values are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    oddsum(A,n);
}

void oddsum(int A[],int n)
{
    int i,Oddsum=0;
    printf("\nsum of odd place digits is\n");
    for(i=1;i<n;i+=2)
    {
        Oddsum = Oddsum + A[i];

    }
    printf("%d",Oddsum);
    average(A,n);

}
void average(int A[],int n)
{
    int i;
    float sum =0,Avg;
    printf("\navg of all entered numbers is \n");
    for(i=0;i<n;i++)
    {
        sum = sum + A[i];
        Avg = sum/n;

    }
    printf("%f",Avg);
    max(A,n);


}
void max(int A[],int n)
{
    int Maxscore = A[0],i;
    printf("\nMAXIMUM SCORE OF STUDENT IS \n");
    for(i=0;i<n;i++)
    {
        if(A[i]>A[0])
        Maxscore = A[i];
    }
    printf("%d",Maxscore);
    studenteligible(A,n);
}
void studenteligible(int A[],int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(A[i]>=75)
        { count++;


        }


    }
    printf("\n %d students are eligible for exhibition\n",count);
}



