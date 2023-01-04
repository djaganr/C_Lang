#include <stdio.h>
#include <stdlib.h>

int main(){

    char chapter[20] = "Arrays";
    int numbers[] = {2, 5, 19};
    char section;
    printf("enter the section: ");

    /* first blank in the format string tells scanf to skip leading white space
    and the first non-whitespace char will be read with the %c conversion specifier */
    scanf(" %c",&section); 
    printf("%d \n", numbers[1]);
    printf("this is %s section %c \n", chapter, section);

    

    return 0;
}