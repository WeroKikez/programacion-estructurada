#include <stdlib.h>
#include <stdio.h>

const float precio_cafe = 13.5;
const float precio_galletas = 25;
const float precio_leche = 14.5;

int main(void) {

    printf("Tienda los Weros\n");
    printf("Lista de Productos: \n");
    printf("1. Cafe \t --> \t$%.2f\n", precio_cafe);
    printf("2. Galletas \t --> \t$%.2f\n", precio_galletas);
    printf("3. Leche \t --> \t$%.2f\n", precio_leche);

    return 0;
}