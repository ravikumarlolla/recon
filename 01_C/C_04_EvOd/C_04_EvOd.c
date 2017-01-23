/*
    Title:To find a number is Even or Odd

    Function Declaration:
    find()

    Function Definition:

*/

#include<stdio.h>
void find(int n);

void find(int n){
    
    if(n%2==0){
        printf("\n The number is Even \n");
    }else{
        printf("\n The number is Odd \n");
    }//end else
    }//end find function

int main(){
 
    int n;
    printf("\n Please enter an integer number \n");
    scanf("%d",&n);
    find (n);
    return 0;

    }//end main