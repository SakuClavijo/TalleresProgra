#include <stdio.h>

int main(){
	
	int num, sum = 0, contar = 0;
	
	printf("Ingresa una lista de numeros cuando finalices la lista ingresa '0'\n ");
	scanf("%d", &num);
	
	while(num != 0){
		if(num % 10 == 5){
			sum += num;
			contar++;
		}
		scanf("%d", &num);
	}
	if(contar > 0){
		double promedio = (double) sum / contar;
		printf("El promedio de los numeros que terminan en 5 es: %f", promedio);
		
	}else{
		printf("No se ingreso ningun numero terminado en 5.\n ");
	}
	
	return 0;
}
