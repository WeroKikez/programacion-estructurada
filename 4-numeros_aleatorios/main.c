#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    int num_alea, total_suma = 0, total_mult = 1, cant_par = 0, cant_imp = 0;

    int pares[100];
    int impares[100];

    srand(time(NULL));

    while (total_mult < 100 && total_suma < 100) {
        // Generamos un número aleatorio del 0 al 9
        num_alea = rand() % 10;

        if(num_alea % 2 == 0) {
            pares[cant_par] = num_alea;
            cant_par += 1;
            total_suma += num_alea;
        } else {
            impares[cant_imp] = num_alea;
            cant_imp += 1;
            total_mult *= num_alea;
        }
    }

    printf("\nNumeros pares: ");
    for(int i = 0; i < cant_par; i++)
        printf("%d ", pares[i]);

    printf("\n");

    printf("Numeros impares: ");
    for(int i = 0; i < cant_imp; i++)
        printf("%d ", impares[i]);

    printf("\n--------------------------\n");
    printf("Cantidad de Numeros Pares: %d\n", cant_par);
    printf("Cantidad de Numeros Impares: %d", cant_imp);

    printf("\n--------------------------\n");
    printf("Total Suma de Pares: %d\n", total_suma);
    printf("Total Multiplicacion de Impares: %d\n", total_mult);

    printf("\n");

    return 0;
}
