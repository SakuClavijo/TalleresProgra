#include <stdio.h>

int main(){
	
	printf("Los numeros terminados en 6 entre el 25 y el 205 son:\n");
	for(int i = 25; i <= 205; i++){
		if(i % 10 == 6){
			printf("%d ", i);
		}
	}
	
	printf("\n");
	
	return 0;
}
