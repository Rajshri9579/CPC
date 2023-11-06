
#include<stdio.h>
#include<stdlib.h>
struct State{
char name[20];
long population;
float lit_rate;
float income
}st1;
int main()
{
    strcpy(st1.name,"Maharashtra");
    st1.population=1000000;
    st1.lit_rate=5.8;
    st1.income=6000.00;

    printf("State Name : %s \n",st1.name);
    printf("population : %ld \n",st1.population);
    printf("literacy Rate : %f\n",st1.lit_rate);
printf("Income : %f \n",st1.income);
return 0;
}