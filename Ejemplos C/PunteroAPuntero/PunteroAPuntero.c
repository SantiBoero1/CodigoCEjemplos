#include <stdio.h>

int main() {
    int variable = 5;
    int *ptr = &variable;       // Puntero a int
    int **ptr_to_ptr = &ptr; // Puntero a puntero a int

    printf("Variable original: %d\n", variable);

    *ptr = 7;

    printf("Variable modificada con puntero: %d\n", variable);

    **ptr_to_ptr = 10; // Modificamos el valor a través del puntero a puntero

    printf("Variable modificada con puntero a puntero: %d\n", variable);
    
    // ¿Que pasa si modifico ahora valor? ¿Se modifican los punteros?

    variable = 8;

    printf("Variable puntero: %d\n", *ptr);
    printf("Variable puntero a puntero: %d\n", **ptr_to_ptr);

    return 0;
}
