#include <stdio.h>

int main(){
	
	int num, i;
	int esPrimo = 1;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	for(i = 2; i <= num / 2; i++){
		if(num % i == 0){
			esPrimo = 0;
			
		}
	}
	
	if(esPrimo == 1){
		printf("El numero es primo\n");
	} else{
		printf("El numero no es primo\n");
	}
	
	return 0;
}
