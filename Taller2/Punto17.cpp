#include <stdio.h>

int main(){
	
	int x, y, sum1 = 0, sum2 = 0;
	float prom1, prom2;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &x);
	printf("Ingresa otro numero:\n ");
	scanf("%d", &y);
	
	for(int i = 1, contar = 0; contar < x; i++){
		if(i % 2 ==0){
			sum1 += i;
			contar++;
		}
	}
	
	prom1 = (float) sum1 / x;
	
	for(int i = 1, contar = 0; contar < y; i++){
		if(i % 5 == 0){
			sum2 += i;
			contar++;
		}
	}
	
	prom2 = (float) sum2 / y;
	
	if (prom1 > prom2){
		 printf("El promedio de los primeros %d multiplos de 2: %.2f. es mayor que el promedio de los primeros %d multiplos de 5 es: %.2f.\n", x, prom1, y, prom2);
    } else {
        printf("El promedio de los primeros %d multiplos de 2 es: %.2f. no es mayor que el promedio de los primeros %d multiplos de 5 es: %.2f.\n", x, prom1, y, prom2);
    }
}
	

