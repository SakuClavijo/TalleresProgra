#include <stdio.h>

int numeroPrimo(int num){
	if(num <= 1){
		return 0;
		
	}
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	
	int num, sumPrimos = 0, cantidadPrimos = 0;
	
	printf("Ingresa una lista de numeros y finalizala con 0:\n ");
	do{
		scanf("%d", &num);
		if(numeroPrimo(num)){
			sumPrimos += num;
			cantidadPrimos++;
		}
	}while(num != 0);
	if(cantidadPrimos > 0){
		int promedio = sumPrimos / cantidadPrimos;
		printf("El promedio de los numeros primos es: %d\n", promedio );
		
	}else{
		printf("No hay numeros primos en tu lista.\n ");
		
	}
	return 0;
}
