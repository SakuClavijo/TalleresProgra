#include <stdio.h>

int main(){
	
	int num, digito = 0;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	while(num != 0){
		digito++;
		num /= 10;
	}
	
	printf("El numero tiene %d digitos\n ", digito);
	
	return 0;
}
