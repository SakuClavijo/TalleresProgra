#include <stdio.h>

int main(){
	
	int num, digito, contar = 0;
	
	printf("Ingresa un numero:\n" );
	scanf("%d", &num);
	
	while(num != 0){
		digito = num % 10;
		if(digito == 1){
			contar++;
		}
		num /= 10;
	}
	
	printf("El digito 1 aparece %d veces.\n ", contar);
	
	return 0;
}
