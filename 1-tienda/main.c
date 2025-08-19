#include <stdlib.h>
#include <stdio.h>

const float precio_cafe = 13.5;
const float precio_galletas = 25;
const float precio_leche = 14.5;

int main(void) {
	// Contadores para las productos
	int cafe, gall, leche;
	float total;

    printf("Tienda los Weros\n");
    printf("Lista de Productos: \n");
    printf("1. Cafe \t --> \t$%.2f\n", precio_cafe);
    printf("2. Galletas \t --> \t$%.2f\n", precio_galletas);
    printf("3. Leche \t --> \t$%.2f\n", precio_leche);
    
    printf("\n");
    printf("Cantidad de sobres de cafe: ");
    scanf("%d", &cafe);
    total += (precio_cafe * cafe);
    
    printf("\nCantidad de paquetes de galletas: ");
    scanf("%d", &gall);
    total += (precio_galletas * gall);
    
    printf("\nCantidad de litros de leche: ");
    scanf("%d", &leche);
    total += (precio_leche * leche);
    
    // system("cls");
    
    printf("Tu total es de: %.2f", total);
    return 0;
}