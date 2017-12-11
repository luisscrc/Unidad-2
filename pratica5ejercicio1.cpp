#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	char oracion[300];
	scanf("%s",&oracion);
	char *toke=strtok(oracion," ");
	while(toke!=NULL){
		printf("Palabras: %s\n", toke);
		toke=strtok(NULL," ");
	}
	getch();
	return 0;
}
