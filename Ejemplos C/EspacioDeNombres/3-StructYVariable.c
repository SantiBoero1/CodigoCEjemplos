#include <stdio.h>

// Definicion de una estructura con la cual crearemos una variable con el mismo nombre

struct ejemplo {
    int valor;  
};

int main(){

    // Creando una variable del tipo de la estructura definida

    struct ejemplo ejemplo;
    ejemplo.valor = 42;

    // Fijemonos que podemos colocarle el mismo nombre que el struct a la variable y no ocurre ningun error

    printf("Valor de la estructura: %d \n", ejemplo.valor);
    return 0;
    
}