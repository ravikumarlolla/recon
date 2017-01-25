/*
Title: To calculate X^N

Function Declaration:
pow()

Function Definition:
pow() : calculates the a number raised to the power of  N
*/

#include<stdio.h>
#include<math.h>

int main(){

    float X,N;long double K;
    printf("\n Enter the base number: ");
    scanf("%f",&X);
    printf("\n Enter the power: ");
    scanf("%f",&N);

    K=pow(X,N); // X raised to the power of N
    
    printf("\n %f raised to the power of %f is %Lf: ",X,N,K);
    return 0;
}   // end main