/*
Title: Program to perform multiplication using plus operator

Function Declaration:
MulPls():

Function Definition:
MulPls(): Adds number_1 to itself number_2 times
*/

#include<stdio.h>
unsigned long int MulPls(unsigned int,unsigned int);

unsigned long int MulPls(unsigned int number_1,unsigned int number_2){

    unsigned long int num_1= number_1;unsigned int num_2= number_2; int index;

    for (index=1;index<num_2;index++){

        num_1+=number_1;

    }   //end of for loop
    return num_1; 

}   // end of MulPls Function




int main(){

unsigned int  number_1,number_2; unsigned long int result;

    printf("\n enter number 1: ");
    scanf("%u",&number_1);
    printf("\n enter number 2: ");
    scanf("%u",&number_2);

    result=MulPls(number_1,number_2);
    printf("\n the result is : %lu\n\n",result);

    return 0;
}   //end main