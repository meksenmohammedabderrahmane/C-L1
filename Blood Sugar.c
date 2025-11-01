#include <stdio.h>
 int main() {
    
    float blood;

    printf("Enter The Blood Sugar Level  : \n");
    scanf(" %f",&blood);
    
    if (blood<1.1 && blood>0.7){
        printf("Normal Blood Sugar");
    }
    else if (blood>1.1){
        printf("Hyperglycemia");
    }
    else{
        printf("Hypoglycemia");
    }
    return 0;
}