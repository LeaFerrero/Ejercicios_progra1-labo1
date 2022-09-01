/*
 ============================================================================
 Name        : ejercicio_3-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
 int Restar1(int, int);
 int Restar2(void);
 void Restar3(int, int);
 void Restar4(void);

 */

#include <stdio.h>
#include <stdlib.h>

int Restar1(int, int);
int Restar2(void);
void Restar3(int, int);
void Restar4(void);

int main(void) {

	setbuf(stdout, NULL);

	int numeroA;
	int numeroB;

	int resultadoRestar1;
	int resultadoRestar2;

	printf("Ingrese el primer numero para Restar1: ");
	scanf("%d", &numeroA);

	printf("Ingrese el segundo numero para Restar1: ");
	scanf("%d", &numeroB);

	resultadoRestar1 = Restar1(numeroA, numeroB);

	printf("El resultado de Restar1 es: %d", resultadoRestar1);

	resultadoRestar2 = Restar2();

	printf("El resultado de Restar2 es: %d", resultadoRestar2);

	Restar3(numeroA, numeroB);

	Restar4();

	return EXIT_SUCCESS;
}

int Restar1(int numeroA, int numeroB)
{
	int resultado;

	resultado = numeroA - numeroB;

	return resultado;
}

int Restar2(void)
{
	int numeroA;
	int numeroB;

	int resultado;

	printf("\n\nIngrese el primer numero para Restar2: ");
	scanf("%d", &numeroA);

	printf("Ingrese el segundo numero para Restar2: ");
	scanf("%d", &numeroB);

	resultado = numeroA - numeroB;

	return resultado;
}

void Restar3(int numeroA, int numeroB)
{
	int resultado;

	resultado = numeroA - numeroB;

	printf("\n\nEl resultado de Restar3 es: %d", resultado);

}

void Restar4(void)
{
	int numeroA;
	int numeroB;

	int resultado;

	printf("\n\ningrese el primer numero para Restar4: ");
	scanf("%d", &numeroA);

	printf("ingrese el segundo numero para Restar4: ");
	scanf("%d", &numeroB);

	resultado = numeroA - numeroB;

	printf("El resultado de Restar4 es: %d", resultado);
}

