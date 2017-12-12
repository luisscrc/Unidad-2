#include <stdio.h>
#include <stdlib.h>
typedef struct Fecha{
	int anio;
	int mes;
	int dia;
}fecha;
typedef struct DIsco{
	char titulo[100];
	char artist[100];
	int no_can;
	float precio;
	struct Fecha;
}Disco;
int main() {
	return 0;
}
