#include <stdio.h> 
#include <stdbool.h>

int main() {
    printf("Hello World\n"); 
    
    int age= 18 ;// THIS IS MY FIRST PROGRAM !!
    int year= 2007 ; 
    float bac = 16.92;
    double pi = 3.14159265358979;
    char name []="Mohamed Abderrahmane";
    char country[]="Algeria";
    
    printf("Hello , my name is %s ,my age is %d, I was born in %d , I got my bac in 2025 with an average of %f \nBtw , Pi is : %.20lf ", name , age , year, bac , pi) ;
    printf("\nI live in %s and my dream is to study in france in the next year.",country);

    return 0;
    
}

