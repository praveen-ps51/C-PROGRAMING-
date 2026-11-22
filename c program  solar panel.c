#include<stdio.h>
int main()
{
    int X_M,Y_A,Z_E,electricityconsumed;
    float Energylost,totalenergy,net_energy_available;
    printf("enter number of units of electricity generated in morning afternoon and evening\n");
    scanf("%d %d %d",&X_M,&Y_A,&Z_E);
    printf("enter units of electricity consumed \n");
    scanf("%d",&electricityconsumed);
    totalenergy = X_M+Y_A+Z_E;
    Energylost = 0.1*totalenergy;
    net_energy_available = totalenergy - (Energylost+electricityconsumed);
    printf("total energy generated is %f\n",totalenergy);
    printf("\nenergy lost is %f",Energylost);
    printf("\n net energy available after consumption is %f",net_energy_available);



}
