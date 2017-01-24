/*
Title: Convert Farenheit to celsius and vice versa
Function Declaration:
FarToCell();

CellToFar();
Function Definition:
FarToCell(): Converts a farenheit value to celsius 
CellToFar(): Converts a Celsius to Farenheit
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float FarToCell(float f );
float CellToFar(float c);

float FarToCell(float f){

    float c;
    c=((f-32)*(5/9));
    return c;

}   //end FarToCell Function

float CellToFar(float c){
    float f;
    f=(32+((9*c)/5));
    return f;

}   //end CellToFar Function

int main(){
    
    float f,c;float result;char ch; char q;

        printf("\n would you like to convert Celsius to Farenheit or Farenheit to celsius \n");

        printf("\n press f and press Enter key if you want to convert from farenheit to celsius \n press c and press Enter key if you want to convert from celsius to farenheit \n");

        printf("\n  press q and press Enter key if u want to quit the application \n");
   
        scanf("%c",&ch);  // taking character from keyboard
    
        while (ch=='q'){
            printf("\n  program has been quit ");
            exit(0);
        }

        while(ch!= 'c' && ch!='f' && ch!='q'){
            printf("\n wrong Alphabet entered program terminated\n");
            exit(0);
        }

        if (ch=='c'){
            printf("\n  Please Enter the value to be converted to farenheit: ");
            scanf("%f",&c);
            result=CellToFar(c);
            printf("\n %f Celsius in farenheit is %f \n",c,result);
        }
        if (ch=='f'){
            printf("\n  Please Enter the value to be converted to celsius: ");
            scanf("%f",&f);
            result=FarToCell(f);
            printf("\n %f farenheit in celsius is %f \n",f,result);
        }

    return 0;
}   //end main