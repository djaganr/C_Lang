#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    double num1;
    double num2;
    char op;

    printf("num1:");
    scanf("%lf", &num1);
    printf("num2:");
    scanf("%lf", &num2);
    printf("op:");
    scanf(" %c", &op);

    if (op =='+'){
        printf("%f", num1+num2)
    } else if (op =='-') {
        

    }

    
    return 0;
}