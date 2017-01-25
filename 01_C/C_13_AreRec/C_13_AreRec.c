/*
Title: to find the arae of the rectangle

Function Declaration:
Area()

Function Definition:
Area(): Calculates  area of the given triangle

*/
#include<stdio.h>
long double Area(double ,double );  // Area Functio Declaration

    long double Area(double length,double breadth) // Start of Area function definition
    {    
            long double area;

            area=length*breadth;

            return area;
    }   // end Area Function

int main(){

    double length,breadth; long double result;
    printf ("\n enter the length of the rectangle: ");
    scanf("%lf",&length);
    printf ("\n enter the breadth of the rectangle: ");
    scanf("%lf",&breadth);

    result=Area(length,breadth);

    printf("\n Area of the rectangle is %Lf: \n\n",result);


    return 0;
}   // end main()
