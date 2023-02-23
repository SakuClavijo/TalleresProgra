#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
    char nombre[50], sueldoStr[20];
    float sueldo, aumento, nuevoSueldo;

    
    printf("Ingrese el nombre del trabajador: ");
    fgets(nombre, sizeof(nombre), stdin);

    nombre[strcspn(nombre, "\n")] = 0;

    printf("Ingrese el sueldo del trabajador: ");
    fgets(sueldoStr, sizeof(sueldoStr), stdin);

    sueldo = strtof(sueldoStr, NULL);

    if (sueldo < 1000000) {
        aumento = 0.07;
    } else if (sueldo <= 1500000) {
        aumento = 0.1;
    } else {
        aumento = 0.12;
    }

    nuevoSueldo = sueldo * (1 + aumento);

    printf("El porcentaje de aumento es del %.2f%%\n", aumento * 100);
    printf("El nuevo sueldo de %s es de $%.2f\n", nombre, nuevoSueldo);

    return 0;
}

