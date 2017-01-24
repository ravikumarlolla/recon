/*
Title: Program to find gross  salary of an Employee

Function Declared:
GrossSalary()

Function Definition:
gives the gross salary of an employee

Note: If the employee works overtime consider his salary increases by 20% for an hour

*/

#include<stdio.h>
long double GrossSalary(int hr, float rate );

long double GrossSalary(int hr, float rate ){
    long double g;
    if(hr<40)
        {
            g=(hr*rate);
            return g;
        }
    else
        {
            g=((40*rate)+((hr-40)*(rate*1.2)));
            return g;
        }

}   // end of GrossSalary Function


int main(){

    int hr;float rate; long double g,result;

    printf("\n Enter the hourly rate  of the Employee: ");
    scanf("%f",&rate);
    printf("\n Enter number of hours worked: ");
    scanf("%d",&hr);
    result=GrossSalary(hr,rate);
    printf("\n Gross salary of the employee is: %Lf \n",result);

    return(0);



}   // end main