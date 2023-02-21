#include <stdio.h>

int main(){
	
	int num1, num2, mutuo;
	
	printf("Ingresa dos numeros:\n ");
	scanf("%d %d", &num1, &num2);
	
	mutuo = (num1/10) * (num2/10);
	printf("El producto mutuo de los numeros es: %d\n ", mutuo);
	
	return 0;
}
