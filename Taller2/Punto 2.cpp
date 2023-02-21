#include <stdio.h>

int main() {
    int num;
    printf("Ingresa un número entero: ");
    scanf("%d", &num);

    printf("Los numeros pares entre 1 y %d son:\n", num);
    for (int i = 2; i <= num; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

