#include <stdio.h>
#include <stdio.h>

// Modificaar programa utilizando funciones

void mostrar_matriz(int mat[4][4]);
int sumar_elementos(int matriz[4][4]);
float promedio_elementos(int mat[4][4]);
void mostrar_pares(int mat[4][4]);
void buscar_numero(int mat[4][4]);
void mostrar_diagonal(int mat[4][4]);

int main() {int matriz[4][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    mostrar_matriz(matriz);
    
    printf("La Suma es: %d\n", sumar_elementos(matriz));
    
    printf("El Promedio es: %.2f\n", promedio_elementos(matriz));
    
    mostrar_pares(matriz);
    
    buscar_numero(matriz);

    mostrar_diagonal(matriz);

    return 0;
}

void mostrar_matriz(int mat[4][4]) {
    int i, j;
    
    // 1. Mostrar los elementos del arreglo
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int sumar_elementos(int mat[4][4]) {
    int i, j, res_suma = 0;

    // 2. Sumar todos los elementos y mostrar el resultado
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            res_suma += mat[i][j];
        }
    }
    return res_suma;
}

float promedio_elementos(int mat[4][4]) {
    float res_suma = sumar_elementos(mat), res_prom = 0;
    int i, j;
    
    // 3. Mostrar el promedio
    res_prom = res_suma / 16;
    return res_prom;
}

void mostrar_pares(int mat[4][4]) {
    int i, j;

    // 4. Mostrar los números pares y la posición en que se encuentran
    printf("Elementos pares y sus posiciones: \n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++)
            if(mat[i][j] % 2 == 0)
            	printf("%d ---> [%d][%d] \n", mat[i][j], i, j);
    }
    printf("\n");
}

void buscar_numero(int mat[4][4]) {
    int num_bus, num_encontrado;
    int i, j;

    // 5. buscar un número y decir en que posición se encuentra
    printf("Numero a buscar: ");
    scanf("%d", &num_bus);

    i = 0;

    while(num_encontrado == 0 && i < 4) {
        j = 0;
        while(j < 4) {
            if(mat[i][j] == num_bus)
                num_encontrado = 1;
            j++;
        }
        i++;
    }

    if(num_encontrado != 0)
        printf("El numero %d si esta en el arreglo\n", num_bus);
    else
        printf("El numero %d no se encuentra en el arreglo\n", num_bus);
    
    printf("\n");
}

void mostrar_diagonal(int mat[4][4]) {
    int i, j;
    
    // 6. mostrar los elementos de la diagonal principal del arreglo.
    printf("Elementos de la diagonal del arreglo: \n");
    i = 0;
    j = 0;
    while(i < 4) {
        printf("%d ", mat[i][j]);
        i++;
        j++;
    }
    
    printf("\n");
}