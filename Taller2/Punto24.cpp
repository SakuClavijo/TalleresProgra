#include <stdio.h>

int main(){
	
	int num, sum = 0, residuo;
	
	printf("Ingresa un numero\n ");
	scanf("%d", &num);
	
	while(num > 0){
		residuo = num % 10;
		if(residuo % 2 == 0){
			sum += residuo;
	
		}
		num /= 10;
	}
	
	printf("La suma de los digitos pares es: %d\n ", sum);
	
	return 0;
}
