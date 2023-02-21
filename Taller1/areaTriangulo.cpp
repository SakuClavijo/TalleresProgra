#include <stdio.h>
#include <math.h>

int main(){
    
    double base, altura, area;
    printf("Ingresa la base del triangulo\n");
    scanf("%lf", &base);
    
    printf("Ingresa la altura del triangulo\n");
    scanf("%lf", &altura);
    
    area = (base*altura)/2;
    printf("El Area del traingulo es: %lf\n", area);
    
    return 0;
}

