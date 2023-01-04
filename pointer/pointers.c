#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = 'L';
    printf("address: %p \n deferencing the pointer, value: %c \n", &c, *&c);
    return 0;
}