#include <stdio.h>

int main(){
	
	int num, factorial = 1, i;
	
	printf("Ingresa un numero que desees saber su factorial.\n" );
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		factorial *= i;
		
	}
	
	printf("El factorial de %d es %d\n", num, factorial);
	
	return 0;
}
