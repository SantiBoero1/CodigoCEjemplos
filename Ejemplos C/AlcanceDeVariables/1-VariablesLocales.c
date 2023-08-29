#include <stdio.h>

int main() {
    int a = 5; // Variable local al bloque main
    printf("a: %d\n", a);
    {
        int b = 10; // Variable local al bloque interno
        printf("b: %d\n", b);
    }

    // La variable 'b' ya no es visible aca

    // printf("b: %d\n", b);
    
    return 0;
}
