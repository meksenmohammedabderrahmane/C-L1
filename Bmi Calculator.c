#include <stdio.h>
#include <math.h>

int main() {
    
    float height;
    float weight;
    float bmi;
    printf("Enter The Number height (in m)  : ");
    scanf(" %f",&height);
    printf("\nEnter The Number weight (in kg ) : ");
    scanf(" %f",&weight);
    bmi=weight/(pow(height,2));
    
    
    if (bmi < 18.5){
        printf("Your Interpretation for your bmi is : Underweight.");
    }    
    else if (24.9>bmi && bmi>18.5){
        printf("Your Interpretation for your bmi is : Normal weight.");
    }
    else if (29.9>bmi && bmi>25){
        printf("Your Interpretation for your bmi is : Overweight");}
    else{
        printf("Your Interpretation for your bmi is : Obesity.");
    }
    return 0;
}