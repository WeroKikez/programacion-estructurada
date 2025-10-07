#include <stdio.h>
#include <stdio.h>

int main() {
    int matriz[4][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    float res_suma = 0, res_prom = 0;
    int num_bus, num_encontrado;
    int i, j;
    
    // 1. Mostrar los elementos del arreglo
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // 2. Sumar todos los elementos y mostrar el resultado
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            res_suma += matriz[i][j];
        }
    }
    printf("Suma de Elementos: %g \n", res_suma);
    
    // 3. Mostrar el promedio
    res_prom = res_suma / 16;
    printf("Promedio de Elementos: %g \n", res_prom);
    printf("\n");
    
    // 4. Mostrar los números pares y la posición en que se encuentran
    printf("Elementos pares y sus posiciones: \n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++)
            if(matriz[i][j] % 2 == 0)
            	printf("%d ---> [%d][%d] \n", matriz[i][j], i, j);
    }
    printf("\n");
    
    // 5. buscar un número y decir en que posición se encuentra
    printf("Numero a buscar: ");
    scanf("%d", &num_bus);

    i = 0;

    while(num_encontrado != 0 && i < 4) {
        j = 0;
        while(j < 4) {
            if(matriz[i][j] == num_bus)
                num_encontrado = 1;
            j++;
        }
        i++;
    }

    if(num_encontrado == 1)
        printf("El numero %d si esta en el arreglo\n", num_bus);
    else
        printf("El numero %d no se encuentra en el arreglo\n", num_bus);
    
    printf("\n");

    // 6. mostrar los elementos de la diagonal principal del arreglo.
    printf("Elementos de la diagonal del arreglo: \n");
    i = 0;
    j = 0;
    while(i < 4) {
        printf("%d ", matriz[i][j]);
        i++;
        j++;
    }
    
    printf("\n");
    return 0;
}
