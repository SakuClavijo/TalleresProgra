#include <stdio.h>

int main(){
	
	int num, digito, max = 0;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	while(num > 0){
		digito = num % 10;
		if(digito > max){
			max = digito;
		}
		
		num /= 10;
	}	
	printf("El mayor es : %d\n", max);
	
	return 0;
}
