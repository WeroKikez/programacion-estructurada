#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    int num_alea, total_suma = 0, total_mult = 1, cant_par = 0, cant_imp = 0;

    srand(time(NULL));

    while (total_mult < 100 && total_suma < 100) {
        // Generamos un número aleatorio del 0 al 9
        num_alea = rand() % 10;


        printf("Numero: %d\n", num_alea);

        if(num_alea % 2 == 0) {
            cant_par += 1;
            total_suma += num_alea;
        } else {
            cant_imp += 1;
            total_mult *= num_alea;
        }

        printf("Total Suma de Pares: %d\n", total_suma);
        printf("Total Multiplicacion de Impares: %d\n", total_mult);
        printf("\n--------------------------\n");
    }

    printf("\n--------------------------\n");
    printf("Total Suma de Pares: %d\n", total_suma);
    printf("Total Multiplicacion de Impares: %d\n", total_mult);

    printf("\n--------------------------\n");
    printf("Cantidad de Numeros Pares: %d\n", cant_par);
    printf("Cantidad de Numeros Impares: %d\n", cant_imp);

    return 0;
}
