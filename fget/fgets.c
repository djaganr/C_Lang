#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    

    char name[20];
    printf("enter name:");
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] =0;
    
    printf("hi %s \n", name);
    return 0;
}