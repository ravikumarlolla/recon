/*
Title: To calculate the simple interest

Function Declaration:
SimInt()

Function Definition:
 SimInt(): Calculates the simple interest for a given period of time

*/

#include<stdio.h>
long double SimInt(long int,float,int,int);    // SimInt Function Declaration

long double SimInt(long int p,float r,int period,int t){    // SimInt Function Definition
    long double i;
    i=(p*((r/100))*(t/period));
    return i;

}

int main(){

    unsigned long int p; float r; int t,period; long double result;

    printf("\n Please provide the principal amount: ");
    scanf("%lu",&p);
    printf("\n Please provide the rate of interest: ");
    scanf("%f",&r);
    printf("\n Please provide number for days for Interest Cycle : ");
    scanf("%d",&period);
    printf("\n Please provide the number of days you would like to have the loan: ");
    scanf("%d",&t);
    result=SimInt(p,r,period,t);
    printf("\n the simple interest for %d days is %Lf" ,t,result);



    return 0;
}