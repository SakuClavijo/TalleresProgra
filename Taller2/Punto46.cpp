#include <stdio.h>

int main(){
	
	int num, i;
	int contar = 0;
	double sum = 0;
	
	printf("Ingresa un numero\n ");
	scanf("%d", &num);
	
	for(i = 1; i <=num; i++){
		int factorial = 1;
		int j;
		for(j = 1; j <= i; j++){
			factorial *= j;
		}
		
		sum += factorial;
		contar++;
	}
	
	int promedio = (int)(sum / contar);
	
	printf("El promedio de los factoriales es: %d\n ", promedio);
	
	return 0;
}
