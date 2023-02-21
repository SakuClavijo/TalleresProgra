#include <stdio.h>

int main(){
	
	int a = 0, b = 1, c, sum = 0, contar = 0;
	
	while(b <= 1000){
		c = a + b;
		a = b;
		b = c;
		
		if(a <= 1000){
			sum += a;
			contar++;
			
		}
	}
	int promedio = sum / contar;
	printf("El promedio de la serie de Fibonacci entre 0 y 1000 es: %d\n ", promedio);
	return 0;
	
}
