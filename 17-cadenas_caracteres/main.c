#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char nombre[50];
    char apellido[50];
    char nombreCom[100];
    int cantVoc = 0;
    int lonNom, lonApe, lonCom, i, j;

    char vocales[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    printf("Nombre: ");
    fgets(nombre, 50, stdin);
    
    printf("Apellido: ");
    fgets(apellido, 50, stdin);

    // Al parecer esto es para remover los saltos de linea
    nombre[strcspn(nombre, "\n")] = '\0';
    apellido[strcspn(apellido, "\n")] = '\0';

    lonNom = strlen(nombre);
    lonApe = strlen(apellido);

    printf("Longitud Nombre: %d\n", lonNom);
    printf("Longitud Apellido: %d\n", lonApe);

    strcpy(nombreCom, nombre);
    strcat(nombreCom, " ");
    strcat(nombreCom, apellido);

    printf("Nombre Completo: %s \n", nombreCom);
    
    lonCom = strlen(nombreCom);

    for(i = 0; i < lonCom; i++) {
        for(j = 0; j < 10; j++) {
            if(nombreCom[i] == vocales[j]) {
                cantVoc += 1;
            }
        }
    }

    printf("Cantidad Vocales en el Nombre: %d \n", cantVoc);

    return 0;
}