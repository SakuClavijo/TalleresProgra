#include <stdio.h>

int main() {
    int num;
    printf("Ingresa un numero entero: ");
    scanf("%d", &num);

    printf("Los Numeros enteros entre 1 y %d son:\n", num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

