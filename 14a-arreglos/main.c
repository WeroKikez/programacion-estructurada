#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Mosificar programa 14 agregando funciones

int main(void) {
  int nums_alea[10];
  float res_suma = 0, res_prom = 0;
  int num_bus, pos_res_bus;
  int i;

  // Semilla para numeros aleatorios
  srand(time(NULL));

  generar_arreglo(nums_alea);

  // 1. Mostrar los elementos del arreglo
  for(i = 0; i < 10; i++) {
    printf("%d ", nums_alea[i]);
  }
  printf("\n");

  // 2. Sumar los elementos y mostrar el resultado
  for(int i = 0; i < 10; i++) {
    res_suma += nums_alea[i];
  }
  printf("Suma Elementos: %.0f \n", res_suma);

  // 3. Mostar el promedio
  res_prom = (res_suma / 10);
  printf("Promedio Elementos: %.1f \n", res_prom);

  // 4. Mostrar los numeros pares y la posición en que se encuentran
  printf("Numeros Pares y Su Posición: \n");
  for(i = 0; i < 10; i++) { 
    if(nums_alea[i] % 2 == 0) {
      printf("%d --> %d \n", nums_alea[i], i);
    }
  }
  printf("\n");

  // 4. Buscar un numero y decir en que posicion se encuentra
  printf("Numero a buscar: ");
  scanf("%d", &num_bus);

  for(i = 0; i < 10; i++) {
    if(num_bus == nums_alea[i])
      printf("El numero se encuentra en la posicion: %d \n", i);
  }

  printf("\n");
  return 0;
}

void generar_arreglo(int arr[10]) {
  int i;

  // Generar un arreglo de numeros aleatorios
  for(i = 0; i < 10; i++) {
    arr[i] = (rand() % 10 + 1);
  }
}