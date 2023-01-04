#include <stdio.h>
#include <stdlib.h>

int main(){
    // write to file
    //FILE *fpointer = fopen("file.txt", "a"); /* a for append, w for write*/
    
    //fprintf(fpointer, "appending some info \n test");

    //fclose(fpointer); 

    char line[500];
    FILE *fpointerr = fopen("file.txt", "r");
    fgets(line, 500, fpointerr);
    printf("%s", line);
    fgets(line, 500, fpointerr);
    printf("%s", line);
    fclose(fpointerr);
    


    return 0;
}