#include <stdio.h>

// Definicion de funcion llamada "ejemplo"

void ejemplo(){
    printf("Llamando a la funcion ejemplo() \n");
}

// Definicion de estructura con el mismo nombre que la funcion

struct ejemplo {

    int valor;  
};

int main(){

    // Creando una variable del tipo de la estructura definida

    struct ejemplo miEjemplo;
    miEjemplo.valor = 42;

    // Llamando a la funcion

    ejemplo();
    printf("Valor de la estructura: %d \n", miEjemplo.valor);
    return 0;
    
}