#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int numero, residuo, centenas, decenas, unidades;
	int impr_unidad = 1;  // Para casos especiales donde se usa una sola palabra para decenas y unidades, tales como (11, 12 ,13, 14 y 15)
	
	printf("Ingrese un numero entre 1 y 999: ");
	scanf("%d", &numero);
	printf("\n");
	
	if(numero < 1 || numero > 999)
		printf("Error: El numero no esta en el rango especificado\n");
		
	centenas = numero / 100;
	residuo = numero % 100;
	
	decenas = residuo / 10;
	residuo = residuo % 10;
	
	unidades = residuo;

	printf("\n");

	switch(centenas) {
			case 1:
				printf("ciento ");
				break;
			case 2:
				printf("doscientos ");
				break; 
			case 3:
				printf("trescientos ");
				break;
			case 4:
				printf("cuatrocientos ");
				break; 
			case 5:
				printf("quinientos ");
				break; 
			case 6:
				printf("seiscientos ");
				break; 
			case 7:
				printf("setecientos ");
				break; 
			case 8:
				printf("ochocientos ");
				break; 
			case 9:
				printf("novecientos ");
				break; 
	}

	switch(decenas) {
			case 1:
				if(unidades >= 0 && unidades < 6) {
					switch (unidades) {
							case 0: 
								printf("diez");
								break;
							case 1:
								printf("once");
								break;
							case 2:
								printf("doce");
								break;
							case 3:
								printf("trece");
								break;
							case 4:
								printf("catorce");
								break;
							case 5: 
								printf("quince");
								break;
					}

					impr_unidad = 0;
				} else {
						printf("dieci");
				}
				break;
			case 2:
				if(unidades == 0)
					printf("veinte");
				else
					printf("veinti");
				break; 
			case 3:
				printf("treinta");
				break;
			case 4:
				printf("cuarenta");
				break; 
			case 5:
				printf("ciencuenta");
				break; 
			case 6:
				printf("sesenta");
				break; 
			case 7:
				printf("setenta");
				break; 
			case 8:
				printf("ochenta");
				break; 
			case 9:
				printf("noventa");
				break; 
	}

	if(decenas > 2 && unidades != 0)
		printf(" y ");

	if(impr_unidad) {
		switch(unidades) {
				case 1:
					printf("uno");
					break;
				case 2:
					printf("dos");
					break; 
				case 3:
					printf("tres");
					break;
				case 4:
					printf("cuatro");
					break; 
				case 5:
					printf("cinco");
					break; 
				case 6:
					printf("seis");
					break; 
				case 7:
					printf("siete");
					break; 
				case 8:
					printf("ocho");
					break; 
				case 9:
					printf("nueve");
					break; 
		}
	}

	printf("\n");
	
	return 0;
}