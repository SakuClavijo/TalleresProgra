#include <stdio.h>

int main(){
	int num;
	
	printf("Ingresa un numero entero: ");
	
	scanf("%d", &num);
	
	printf("Los Divisores extactos de %d son:  \n", num);
	
	for(int i = 1; i <= num; i++) {
		if(num % i == 0){
			printf("%d ", i);
		}
     }
     
    printf("\n");
    
    return 0;
}
