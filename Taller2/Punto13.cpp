#include <stdio.h>

int main(){
	
	int num;
	
	printf("Ingresa un numero entero:\n ");
	scanf("%d", &num);
	
	printf("Los multiplos de 5 entre 1 y %d son: ", num);
	for(int i = 1; i <= num; i++){
		if(i % 5 == 0){
			printf("%d ", i);
		}
	}
	
	printf("\n");
	
	return 0;
}


