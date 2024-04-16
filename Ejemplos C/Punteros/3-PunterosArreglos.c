#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_ELEMENTOS

int main(int argc, char* argv[]){
    int array1[5] = {1, 2, 3, 4, 5};
    int *array2 = calloc(5, sizeof(int));

    printf("array1 = %i\n", array1);
    printf("array2 = %i\n", array2);
    
    //array1 = 10;
    array2 = 10;

    printf("array1 = %i\n", array1);
    printf("array2 = %i\n", array2);

    return EXIT_SUCCESS;
}