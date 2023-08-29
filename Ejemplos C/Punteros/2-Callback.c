#include <stdio.h>
#include <stdlib.h>

//Declaro funciones "callback" (que serán llamadas por otra función al pasarlas por parámetro)

float sumar(float num1, float num2){
    return num1 + num2;
}

float restar(float num1, float num2){
    return num1 - num2;
}

float dividir(float num1, float num2){
    return num1 / num2;
}

float multiplicar(float num1, float num2){
    return num1 * num2;
}

//Decalro una función que recibe otra función como parámetro.
//Almacena un puntero a la función en la variable operar.
void operar_imprimir(float num1, float num2, float (*operar) (float, float)){
    printf("El resultado de la operación es %f.\n",operar(num1, num2));
}

int main(int argc, char* argv[]){
    switch(argv[1][0]){
        case 'S': operar_imprimir(atof(argv[2]), atof(argv[3]), sumar); break;
        case 'R': operar_imprimir(atof(argv[2]), atof(argv[3]), restar); break;
        case 'M': operar_imprimir(atof(argv[2]), atof(argv[3]), multiplicar); break;
        case 'D': operar_imprimir(atof(argv[2]), atof(argv[3]), dividir); break;
        default: printf("Ingresar una operación válida.\n");
    }
    return 0;
}