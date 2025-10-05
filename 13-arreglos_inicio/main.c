#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int cuadrados[10];
	int i;
	
	// Mostrar el arreglo
	printf("Arreglo: ");
	for(i = 0; i < 9; i++) { 
		printf("%d ", nums[i]);
	}
	printf("\n");
	
	// Mostrar los numeros pares
	printf("Numeros Pares: ");
	for(i = 0; i < 9; i++) { 
		if(nums[i] % 2 == 0)
			printf("%d ", nums[i]);
	}
	printf("\n");
	
	// Mostrar el contenido de los números pares
	printf("Contenido Indices Impares: ");
	for(i = 0; i < 9; i++ ){
		if(i % 2 != 0)
			printf("%d ", nums[i]);
	}
	printf("\n");
	
	// Almacenar en otro arreglo el cuadrado de los numeros del primero
	printf("Elementos segundo arreglo: ");
	for(i = 0; i < 9; i++) {
		cuadrados[i] = nums[i] * nums[i];
		printf("%d ", cuadrados[i]);
	}
	printf("\n");
	
	return 0;
}
