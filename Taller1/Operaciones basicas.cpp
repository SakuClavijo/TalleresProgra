#include <stdio.h>

int main(){
    int num1, num2;

    printf("Ingresa el primer numero: \n");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: \n");
    scanf("%d", &num2);

    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    float division;
        if (num2 != 0){
            division = (float) num1 / num2;
        } else{
            division = 0;
            printf("No se puede dividir por Cero (0)\n");
        }
    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicacion es: %d\n", multiplicacion);
    printf("La division es: %f\n", division);


    return 0;
}

