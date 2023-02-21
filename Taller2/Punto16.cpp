#include <stdio.h>

int main(){
	
	int num, sum = 0;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	for(int i = 1, contar = 0; contar < num; i++){
		if(i % 3 == 0){
			sum += i;
			contar++;
		}
	}
	
	int promedio = sum / num;
	
	printf("El promedio de los primeros %d multiplos de 3 es: %d\n", num, promedio);
	
	return 0;
}
