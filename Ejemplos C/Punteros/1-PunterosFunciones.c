#include <stdio.h>

void ejemplo(){
    printf("Llamado a la función ejemplo()\n.");
}

int main(){

    //Creo una vatiable de nombre "puntero_a_ejemplo" que es de tipo puntero a una función.
    //<Tipo de dato que devuelve la función> (*IDENTIFICADOR) (lista de parámetros);
    void (*puntero_a_ejemplo) (void) = ejemplo;

    //Llamo a la función ejemplo() a través del puntero puntero_a_ejemplo.
    puntero_a_ejemplo();

    return 0;
}