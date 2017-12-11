#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(){
	char linea1[500];
	char linea2[500]
	printf("Escribe la línea a invertir\n");
	scanf("%s",&linea1);
	//tamaño de la cadena
	int i,tam=strlen(linea1);
	
	for(i=0;i<tam;i++){
		linea2[i]=linea1[tam-1-i];
	}
		printf("linea invertida\n %s",linea2);
	getch();
	return 0;
}
