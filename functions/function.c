#include <stdio.h>
#include <stdlib.h>


void sayHi(char name[], int age){
    printf("%s hi , you are %d \n", name, age);
}

double cube(double num){
    return num*num*num;
}



int main(){

    sayHi("Mike", 30);
    printf("%f \n",cube(3));
    return 0;
}

