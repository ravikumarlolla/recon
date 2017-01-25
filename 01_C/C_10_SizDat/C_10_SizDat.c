/*
Title: to find the size of data types using sizeof()

Function Declaration:
sizeof()

Function Definition:
sizeof():  gives the size of various data types

*/
#include<stdio.h>

int main(){
    
    int integer; float decimal; char character='c'; double doble_number;
    printf("\n Enter an integer value: ");
    scanf("%d",&integer);
    printf("\n Enter an float value: ");
    scanf("%f",&decimal);
    printf("\n Enter an double value: ");
    scanf("%lf",&doble_number);

    printf("\n Size of  integer value: %lu",sizeof(integer));
    printf("\n Size of  float value: %lu",sizeof(float));
    printf("\n Size of  char value: %lu",sizeof(character));
    printf("\n Size of  double value: %lu \n\n",sizeof(doble_number));

    return 0;
}
