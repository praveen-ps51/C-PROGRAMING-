#include<stdio.h>
int main()
{
    char item_c;
    int P_A;
    float discount,net_P_A;
    printf("enter the type of item you have purchased and its cost\n");
    scanf("%c%d",&item_c,&P_A);


    switch(item_c){
    case 'B':
         'b': { if(P_A>=1&&P_A<=600)
               {discount=0;
              net_P_A = P_A;}
              else if(P_A>=601&&P_A<=1500)
            {discount = (P_A-600)*0.05;
            net_P_A = P_A - discount;}
         else
            {discount = (P_A-600)*0.05+(P_A-1500)*0.1;
            net_P_A = P_A - discount;}}
            break;
     case 'S':
          's': {  if(P_A>=1&&P_A<=300)
            {discount = 0;
            net_P_A = P_A;}
            else if(P_A>301&&P_A<=800)
            {discount = (P_A-300)*0.04;
            net_P_A = P_A-discount;}
            else
        {discount = (P_A - 300)*0.04 + (P_A-800)*0.08;
            net_P_A = P_A-discount;}
            break;}
 case 'G':
      'g':  {if(P_A>=1&&P_A<=1000)
           {

            discount = 0;
            net_P_A = P_A;}
           else if(P_A>=1001&&P_A<=2500)
            {discount = (P_A-1000)*0.06;
            net_P_A = P_A - discount;}
            else
            {discount = (P_A-1000)*0.06+(P_A-2500)*0.12;
            net_p_A = P_A - discount;}
            break;}

 default:
    printf("you have entered invalid item type\n");}

          printf("\ndiscount awarded = %f\n",discount);
          printf("\n net payable amount = %f\n",net_P_A);
}













    }
}
