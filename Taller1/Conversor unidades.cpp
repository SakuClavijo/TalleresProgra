#include <stdio.h>
#include <math.h>

int main(){
	float medidaMetros;

	printf("Ingresa la medida en Metros:\n");
	scanf("%f", &medidaMetros);
	
	float medidaKilometros = medidaMetros / 1000;
	float medidaCentimetros = medidaMetros * 100;
	
	printf("%.2f Es equivalente a: %.2f\n", medidaMetros, medidaKilometros);
	printf("%.2f Es equivalente a: %.2f\n", medidaMetros, medidaCentimetros);

	return 0;
}

