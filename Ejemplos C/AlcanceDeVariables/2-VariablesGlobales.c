#include <stdio.h>

int globalVar = 100; // Variable global
 
void funcionImprimirVarGlobal() {
    printf("globalVar: %d\n", globalVar);
}

int main() {
    printf("globalVar: %d\n", globalVar);

    if(globalVar)
    printf("globalVar: %d\n", globalVar);

    funcionImprimirVarGlobal();
    return 0;
}
