#include <stdio.h>
#include <math.h>

int main(){
	
	int num, digito, sum = 0, contar = 0;
	float promedio;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	while(num > 0){
		digito = num % 10;
		sum += digito;
		contar++;
		num /= 10;
	}
	
	promedio = (float) sum / contar;
	
	printf("El promedio de los numeros es: %d\n ", (int) floor(promedio));
	
	return 0;
}
