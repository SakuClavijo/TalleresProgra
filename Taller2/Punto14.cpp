#include <stdio.h>

int main(){
	
	printf("Los primeros multiplos de 20 de 3 son:\n ");
	for(int i = 1, contar = 0; contar < 20; i++){
		if(i % 3 == 0){
			printf("%d ", i);
			contar++;
		}
	}
	
	printf("\n");
	
	return 0;
	
}

