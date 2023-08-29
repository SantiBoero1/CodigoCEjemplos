#include <stdio.h>

int main() {
    int variable = 5;
    int *ptr = &variable;       // Puntero a int
    int **ptr_to_ptr = &ptr; // Puntero a puntero a int

    printf("Variable original: %d\n", variable);

    *ptr = 7;

    printf("Variable modificada con puntero: %d\n", variable);

    **ptr_to_ptr = 10; // Modificamos el valor a través del puntero a puntero

    printf("Variable modificada con puntero a puntero: %d\n\n", variable);
    
    // ¿Que pasa si modifico ahora variable? ¿Se modifican los punteros?

    // variable = 8;

    //printf("Variable puntero: %d\n", *ptr);
    //printf("Variable puntero a puntero: %d\n\n", **ptr_to_ptr);
    


    /* ¿Y como se que el puntero realmente apunta al otro? Fijemonos

    printf("Direccion de memoria en la que esta la variable: %d\n\n", &variable);

    printf("Direccion a la que apunta el puntero: %d\n", ptr);
    printf("Direccion del puntero: %d\n\n", &ptr);

    printf("Direccion a la que apunta el puntero a puntero: %d\n", ptr_to_ptr);
    printf("Direccion del puntero a puntero: %d\n\n", &ptr_to_ptr);
    
    */
    
    

    return 0;
}
