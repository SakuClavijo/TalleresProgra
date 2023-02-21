#include <stdio.h>

int main(){
	
	int num, i;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	printf("La tabla de multiplicar de %d es:\n ",num);
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d\n ", num, i, num * i);
		
	}
	return 0;
}
