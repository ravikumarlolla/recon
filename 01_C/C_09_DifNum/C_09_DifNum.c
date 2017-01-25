/*
Title: to find the difference of two numbers

Function Declaration:
DifNum()

Function Definition:
DifNum(): Calculates  the difference between two numbers

*/

#include<stdio.h>
long double DifNum(long double,long double);

long double DifNum(long double number_1,long double number_2){
    long double result;

    result= number_1 - number_2;

    return result;


}// end of DifNum Function

int main(){

    long double number_1, number_2;long double result;

    printf("\n Enter the first number:  ");
    scanf("%Lf",&number_1);
    printf("\n Enter the second number:  ");
    scanf("%Lf",&number_2);
    result=DifNum(number_1,number_2);
    printf("\n Difference of %Lf and %Lf two is: %Lf",number_1,number_2,result);
    return 0;
    

    
}   //end main()