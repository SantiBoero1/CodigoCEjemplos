#include <stdio.h>

int main() {

    int a = 4;
    int b = 6;

    //printf("a (fuera del bloque) = %d\n", a);
    //printf("b (fuera del bloque) = %d\n", b);
    {
        int b = 10; // Variable local al bloque interno (distinta a la variable local del main)
        a = 10; //Puedo usar una variable declarada fuera del bloque y modificar su valor

        //printf("a (dentro del bloque) = %d\n", a);
        printf("b (dentro del bloque) = %d\n", b);
    }
    printf("a (fuera del bloque) = %d\n", a);
    printf("b (fuera del bloque) = %d\n", b);
    return 0;
}
