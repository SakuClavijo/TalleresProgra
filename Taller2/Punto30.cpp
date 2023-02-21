#include <stdio.h>

int main(){
	
	int num;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	printf("Los multiplos de %d son:\n ", num);
	
	for(int i = 1; i <= num; i++){
		if(num % i == 0){
			printf("%d ", i);
		}
	}
	return 0;
}
