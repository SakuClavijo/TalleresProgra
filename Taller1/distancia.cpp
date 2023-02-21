#include <stdio.h>
#include <math.h>

int main()
{
    float velocidadFinal = 100.0;
    float tiempoAceleracion = 35.0;
    float tiempo = 20.0;
    
    float velocidadPromedio = velocidadFinal / (tiempoAceleracion / tiempo);
    float distancia = velocidadPromedio * tiempo;
        
    printf("El carro viaja %f Metros en 20 segundos \n", distancia);
    
    return 0;
}

