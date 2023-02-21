#include <stdio.h>

int main(){
	
	int num, i, j;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		int factorial = 1;
		for(j = 1; j <= i; j++){
			factorial *= j;
		}
		printf("El factorial de %d es %d\n ",i, factorial);
			
	}
	return 0;
}
