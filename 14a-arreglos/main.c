#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define CANTIDAD_ELEMENTOS 10

// Mosificar programa 14 agregando funciones

// Declarar las funciones
void generar_arreglo(int arr[CANTIDAD_ELEMENTOS]);
void mostrar_arreglo(int arr[CANTIDAD_ELEMENTOS]);
int sumar_elementos(int arr[CANTIDAD_ELEMENTOS]);
float promedio_elementos(int arr[CANTIDAD_ELEMENTOS]);
void mostrar_pares(int arr[CANTIDAD_ELEMENTOS]);
void buscar_numero(int arr[CANTIDAD_ELEMENTOS]);

int main(void) {
  int nums_alea[CANTIDAD_ELEMENTOS];
 // Semilla para numeros aleatorios
  srand(time(NULL));

  generar_arreglo(nums_alea);

  mostrar_arreglo(nums_alea);

  printf("La Suma es: %d\n", sumar_elementos(nums_alea));

  printf("El Promedio es: %.1f\n", promedio_elementos(nums_alea));

  mostrar_pares(nums_alea);

  buscar_numero(nums_alea);

  printf("\n"); 
  return 0;
} 

void generar_arreglo(int arr[CANTIDAD_ELEMENTOS]) {
  int i;

  // Asignar numeros aleatorios al arreglo
  for(i = 0; i < CANTIDAD_ELEMENTOS; i++) {
    arr[i] = (rand() % CANTIDAD_ELEMENTOS + 1);
  }
}

void mostrar_arreglo(int arr[CANTIDAD_ELEMENTOS]) {
  int i;

  // 1. Mostrar los elementos del arreglo
  for(i = 0; i < CANTIDAD_ELEMENTOS; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int sumar_elementos(int arr[CANTIDAD_ELEMENTOS]) {
  int i, res_suma = 0;

  // 2. Sumar los elementos y mostrar el resultado
  for(int i = 0; i < CANTIDAD_ELEMENTOS; i++) {
    res_suma += arr[i];
  }
  return res_suma;
}

float promedio_elementos(int arr[CANTIDAD_ELEMENTOS]) {
  float res_suma = sumar_elementos(arr), res_prom = 0;
  
  // 3. Mostar el promedio
  res_prom = (res_suma / CANTIDAD_ELEMENTOS);
  return res_prom;
}

void mostrar_pares(int arr[CANTIDAD_ELEMENTOS]) {
  int i;
  
  // 4. Mostrar los numeros pares y la posición en que se encuentran
  printf("Numeros Pares y Su Posición: \n");
  for(i = 0; i < CANTIDAD_ELEMENTOS; i++) { 
    if(arr[i] % 2 == 0) {
      printf("%d --> %d \n", arr[i], i);
    }
  }
  printf("\n");
}

void buscar_numero(int arr[CANTIDAD_ELEMENTOS]) {
  int i, num_bus, encontrado;
  
  // 4. Buscar un numero y decir en que posicion se encuentra
  printf("Numero a buscar: ");
  scanf("%d", &num_bus);

  i = 0;
  encontrado = 0;

  while(encontrado == 0 && i < CANTIDAD_ELEMENTOS) {
    if(arr[i] == num_bus)
      encontrado = 1;
    i++;
  }

  if(encontrado != 0)
    printf("Numero %d encontrado en la posicion: %d\n", num_bus, i - 1);
  else
    printf("El Numero %d no esta en el arreglo\n", num_bus);
}
