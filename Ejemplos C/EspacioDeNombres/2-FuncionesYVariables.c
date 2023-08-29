#include <stdio.h>

// Definicion de funcion llamada "ejemplo"

void ejemplo(){
    printf("Llamando a la funcion ejemplo() \n");
}


int main(){

    // Creando una variable con el mismo nombre que una funcion global

    int ejemplo = 3;

    // Llamando a la funcion

    ejemplo();
    
    return ejemplo;
    
}