/*
Title: to find the difference of two numbers

Function Declaration:
Area()
Peri()

Function Definition:
Area(): Calculates  the area of the circle
Peri(): Calculates the Perimeter of the circle

*/

#include<stdio.h>
#include<math.h>
#define PI 3.141593

float Area(float);
float Peri(float);


    float Area(float r)
    {
        float area;
        area=PI*(r*r);
        return area;
    }   // end function Area

    float Peri(float r)
    {
        float peri;
        peri=2*PI*r;
        return peri;
    }   // end function Peri

int main(){

    float r,area,peri;
    printf("\n Enter the radius of the circle: ");
    scanf("%f",&r);
    area=Area(r);
    peri=Peri(r);

    printf("\n Area is :%f and Perimeter is :%f \n",area,peri);

    return 0;

}   // end main()