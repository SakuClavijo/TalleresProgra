#include <stdio.h>
#include <string.h>

int main(){
	
	char nombre[50];
	float sueldo, aumento, nuevoSueldo;
	
	printf("Ingresa el nombre del trabajador: ");
	fgets(nombre, sizeof(nombre), stdin);
	
	printf("Ingresa el sueldo del trabajador");
	scanf("%f", &sueldo);
	
	if(sueldo < 1000000){
		aumento = 0.07;
		
	}else if(sueldo <= 1500000){
		aumento = 0.1;
		
	}else{
		aumento = 0.12;
		
	}
	
	nuevoSueldo = sueldo * (1 + aumento);
	
	printf("El porcentaje de aumento es del %.2f%%\n", aumento * 100);
	printf("El aumento del salario de %s es %.2f%\n", nombre, nuevoSueldo);
	
	return 0;
	
}
