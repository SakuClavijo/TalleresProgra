#include <stdio.h>

int main(){
    float x1, y1, x2, y2;

    printf("Ingresa la coordenada x del primer punto (X1)\n");
    scanf("%f", &x1);
    printf("Ingresa la coordenada x del primer punto (Y1)\n");
    scanf("%f", &y1);
    printf("Ingresa la coordenada x del segundo punto (X2)\n");
    scanf("%f", &x2);
    printf("Ingresa la coordenada x del segundo punto (Y2)\n");
    scanf("%f", &y2);

    float pendiente = (y2 - y1) / (x2 - x1);

    printf("La pendiente de la recta es: %f\n", pendiente);

    return 0;
}

