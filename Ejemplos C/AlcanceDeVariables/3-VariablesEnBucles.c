#include <stdio.h>

int globalVar = 3;

int main() {

    int localVar = 0;

    for (int i = 0; i < 5; i++) {
        localVar += i; // Variable local al bucle
        printf("localVarEnElFor: %d\n", localVar);
        // Hasta aca, la variable localVar vale 10
    }

    if(localVar){
        //localVar = 5;
        int localVar = 80;
        globalVar = 5; 
        printf("\nlocalVarDelIf: %d\n\n",localVar);
    }

    printf("localVarAlFinal: %d\n\n", localVar);
    printf("globalVarAlFinal: %d\n\n", globalVar);

    return 0;
}
