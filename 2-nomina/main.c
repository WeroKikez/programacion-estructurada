#include <stdio.h>
#include <stdlib.h>

const float sueldo_prof = 200;
const float sueldo_secr = 100;
const float sueldo_mozo = 50;

const float bono = 25;
const float porc_presta = .10;

int main(int argc, char *argv[]) {
	float paga, prestaciones, deducciones, sueldo_hora;
	int puesto, horas_laboradas, horas_normales, horas_extras = 0, horas_triples = 0;

    printf("\nIntroduce las horas laboradas: ");
    scanf("%d", &horas_laboradas);
	
	printf("\n");
	printf("\t1. Profesor\n");
	printf("\t2. Secretaria\n");
	printf("\t3. Mozo\n");
	
	printf("\nSelecciona tu puesto: ");
	scanf("%d", &puesto);
	
	system("clear");
    
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
    
    // Trabajo horas normales
    if(horas_laboradas <= 40) {
        horas_normales = horas_laboradas;
        
    } else if( horas_laboradas > 40) { // trabajo horas extra
        horas_normales = 40;
        horas_extras = horas_laboradas - 40;

        // Trabajo más de 8 horas extra
        if(horas_laboradas > 48) {
            horas_extras = 8;
            horas_triples = horas_laboradas - 48;
        }
    }

    printf("Sueldo por hora: $%.2f \n", sueldo_hora);

    // Calculo de horas normales
    paga += horas_normales * sueldo_hora;     
    printf("Horas laboradas (normales): %d horas \n", horas_normales);

    // Calculo de horas extras
    paga += horas_extras * (sueldo_hora * 2);
    printf("Horas laboradas (extras): %d horas \n", horas_extras);

    // Calculo de horas extras triples
    paga += horas_triples * (sueldo_hora * 3);
    printf("Horas laboradas (dobles extras): %d horas \n", horas_triples);

    // Mostrando sueldo antes de prestaciones y deducciones
    printf("Sueldo Base: $%.2f \n", paga);
    
    // Calculo de prestaciones 
    prestaciones = paga * porc_presta;
    paga += prestaciones;
    printf("Prestaciones (10%c): $%.2f \n", 37, prestaciones);

    // Calculo de deducciones segun el ingreso después de prestaciones
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
    
    // Mostrando el sueldo final
    printf("Sueldo final: $%.2f \n", paga);

    printf("\n");
	
	return 0;
}