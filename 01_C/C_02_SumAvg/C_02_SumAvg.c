/*
Title: Finding Avg of Two numbers
Declaration:
Avg()

Definition:


*/

#include<stdio.h>
void Avg(void);

void Avg(){

    long double a,b,avg;
    printf("\n Provide the numbers for Performing Average \n");
    scanf("%Lf",&a);
    scanf("%Lf",&b);
    avg=(a+b)/2;
    printf("\n Avg is %Lf " ,avg);

    }



int main(){

    Avg(); 

    return 0;

    }

