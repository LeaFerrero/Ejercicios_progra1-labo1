/*
 ============================================================================
 Name        : ejercicio_5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejercicio 5-2: Hacer una funci�n que calcule el promedio de los valores del Array que
recibe y me devuelva el promedio.

 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

float promediarInt(int*, int);

int main(void) {

	setbuf(stdout, NULL);

	int arrayInt[TAM];
	int i;
	float promedio;

	for(i=0; i<TAM; i++)
	{
		printf("Ingrese un numero entero: ");
		scanf("%d", &arrayInt[i]);
	}

	promedio = promediarInt(arrayInt, TAM);

	printf("El promedio es: %.2f", promedio);

	return EXIT_SUCCESS;
}

float promediarInt(int* array, int tam)
{
	int i;
	int suma;
	float promedio;

	for(i=0; i<tam; i++)
	{
		suma += array[i];
	}

	promedio = (float)suma / tam;

	return promedio;
}
