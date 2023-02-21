#include <stdio.h>
#include <math.h>

int main(){
    float monedaCop, monedaEuro, monedaDolar;
    float cambioDolar = 3800, cambioEuro = 4500;
    
    printf("Ingresa la cantidad de Pesos Colombianos\n");
    scanf("%f", &monedaCop);
        
        monedaDolar = monedaCop/cambioDolar;
        monedaEuro = monedaCop/cambioEuro;
        
    printf("El eqivalente de COP a USD es: $%.2f\n", monedaDolar);
    printf("El Equicalente de COP a EU es: €%.2f\n", monedaEuro);
    
    return 0;
}

