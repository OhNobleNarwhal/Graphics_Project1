#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input;
    char  c;



    input = fopen("test.txt", "r");

    if (input == NULL){
        printf("File was not opened \n");
        exit (0);
    }

    c = fgetc(input);
    while (c != EOF){
        printf("%c", c);
        c = fgetc(input);
    }

    fclose(input);
    return 0;

}