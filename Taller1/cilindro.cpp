#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main(){
    double radio, altura, area, volumen;
    
    printf("Ingresa el radio del Cilindro\n");
    scanf("%lf", &radio);
    
    printf("Ingresa la altura del Cilindro\n");
    scanf("%lf", &altura);
    
    area = 2 * PI * radio * (radio + altura);
    volumen = PI * pow(radio,2) * altura;
    
    printf("El area del Cilindro es: %.2lf\n", area);
    printf("El volumen del Cilindro es: %.2lf\n", volumen);
    
    return 0;
}

