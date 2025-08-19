#include <stdio.h>
#include <stdlib.h>

const float sueldo_prof = 200;
const float sueldo_secr = 100;
const float sueldo_mozo = 50;

const float bono = 25;
const float porc_presta = .10;

int main(int argc, char *argv[]) {
	float paga, prestaciones, deducciones, sueldo_hora;
	int puesto, horas_laboradas;

    printf("\nIntroduce las horas laboradas: ");
    scanf("%d", &horas_laboradas);
	
	printf("\n");
	printf("\t1. Profesor\n");
	printf("\t2. Secretaria\n");
	printf("\t3. Mozo\n");
	
	printf("\nSelecciona tu puesto: ");
	scanf("%d", &puesto);
	
	switch(puesto) {
		case 1:
            printf("\nPuesto: Profesor\n");
            sueldo_hora = sueldo_prof;
			break;
		case 2:
            printf("\nPuesto: Secretaria\n");
            sueldo_hora = sueldo_secr;
			break;
		case 3:
			printf("\nPuesto: Mozo\n");
            sueldo_hora = sueldo_mozo;
			break;
		default:
			printf("\n-------------------------------\n");
			printf("Error: Seleccion fuera de rango");
	}

    system("clear");
    
    if(horas_laboradas <= 40) {
        paga += horas_laboradas * sueldo_hora;
        
        printf("Sueldo por hora: $%.2f \n", sueldo_hora);
        printf("Horas laboradas (normales): %d horas \n", horas_laboradas);

        printf("Sueldo Base: $%.2f \n", paga);
        
        prestaciones = paga * porc_presta;
        paga += prestaciones;
        printf("Prestaciones (10%c): $%.2f \n", 37, prestaciones);

        printf("Sueldo Antes de Deducciones: $%.2f \n", paga);
        printf("Deducciones (");

        
        if(paga < 1000) {
            deducciones = paga * .8;
            printf("8%c): $%.2f \n", 37, deducciones);
        }
        else if (paga > 1000 && paga < 1500) {
            deducciones = paga * .12;		
            printf("12%c): $%.2f \n", 37, deducciones);
        }
        else {
            deducciones = paga * .15;	
            printf("15%c): $%.2f \n", 37, deducciones);
        }

        paga -= deducciones;
        
        printf("Sueldo final: $%.2f \n", paga);
        
    } else if( horas_laboradas <= 48) {
        
    } else {
        
    }

    printf("\n");
	
	return 0;
}