#include <stdio.h>
#include <math.h>

const float PI = 3.1416;

int main() {
    float radio;
    
    printf("Ingresa el radio del la Esfera\n");
    scanf("%f", &radio);
    
    float area = 4 * PI * pow(radio, 2);
    float volumen = (4.0 / 3.0) * PI * pow(radio, 3);
    
    printf("El area de la esfera es: %f\n", area);
    printf("El Volumen de la esfera es: %f\n", volumen);
    
    return 0;
}

