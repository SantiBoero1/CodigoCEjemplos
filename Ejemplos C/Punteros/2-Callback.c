#include <stdio.h>

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

int main(){
    operar_imprimir(5, 4, multiplicar);
    return 0;
}